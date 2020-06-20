#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tamTitulos 5
#define tamProfs 14


typedef struct Titulos{
    int cod_titulo;
    char descricao[30];
    float valorPHA;
} Titulos;

typedef struct Professor{
    int numRegistro;
    char nome[100];
    int cod_titulo;
    float totalHApSemana;
} Professor;


void cadastrarTitulos();
void lerTitulosArquivo(Titulos vetorTitulos[]);
void strSplitProf(char *strTOsplit,char *strArr[], char *strSeparet,int nArr);
void cadastrarProfs(Titulos vetorTitulos[]);
void lerProfsArquivo(Professor vetorProfessores[]);
void printarRelacao(Professor vetorProfessores[], Titulos vetorTitulos[]);


int main()
{
    Titulos vetorTitulos[250];
    Professor vetorProfessores[1000];

    //cadastrarTitulos();
    lerTitulosArquivo(vetorTitulos);
    //cadastrarProfs(vetorTitulos);
    lerProfsArquivo(vetorProfessores);
    printarRelacao(vetorProfessores, vetorTitulos);


    return 0;
}

void cadastrarTitulos()
{
    FILE *arqTitulos;
    arqTitulos = fopen("Titulos.txt", "w");

    int numRegistro, i;
    char descricao[30];
    float valorPHA;

    for(i=0;i<tamTitulos;i++)
    {
        printf(">> Cadastrar titulo: %d\n", i);
        numRegistro = i;
        fflush(stdin);
        printf("\nDigite a descricao/titulo: ");
        gets(descricao);
        printf("Digite o valor da hora/aula: ");
        do
        {
            scanf("%f", &valorPHA);
            if(valorPHA<0)
            {
                printf("Valor invalido!");
                printf("\nDigite um valor maior que 0: ");
            }

        } while (valorPHA<0);
        printf("\n");


        fprintf(arqTitulos, "\n%i;%s;%.2f", numRegistro, descricao, valorPHA);

    }

    fclose(arqTitulos);

}

void strSplit(char *strTOsplit,char *strArr[], char *strSeparet,int nArr)
{
    int i = 0;
    char * pch;

    pch = strtok (strTOsplit,strSeparet);
    for(i = 0;i < nArr;i++)
    {
        //printf ("%s\n",pch);

        strArr[i] = pch;
        pch = strtok (NULL,strSeparet);
    }

}

void lerTitulosArquivo(Titulos vetorTitulos[])
{
    FILE *arqTitulos;
    arqTitulos = fopen("Titulos.txt", "r");

    char linha[100];
    char *result;
    char *informacoes_linha[3];
    int i=0;
    int j=0;

    while (!feof(arqTitulos))
    {
        result = *fgets (linha, 100, arqTitulos);
        if(j!=0)
        {
            strSplit(linha, informacoes_linha, ";",3);

            vetorTitulos[i].cod_titulo = atoi(informacoes_linha[0]);
            strcpy(vetorTitulos[i].descricao, (const char*)(informacoes_linha[1]) );
            vetorTitulos[i].valorPHA = atof(informacoes_linha[2]);

            i++;
        }
        j++;
    }
    fclose(arqTitulos);
}

void strSplitProf(char *strTOsplit,char *strArr[], char *strSeparet,int nArr)
{
    int i = 0;
    char * pch;

    pch = strtok (strTOsplit,strSeparet);
    for(i = 0;i < nArr;i++)
    {
        //printf ("%s\n",pch);

        strArr[i] = pch;
        pch = strtok (NULL,strSeparet);
    }

}

void cadastrarProfs(Titulos vetorTitulos[])
{
    FILE *arqProfs;
    arqProfs = fopen("Profs.txt", "w");

    int numRegistro, cod_titulo, i, j;
    char nome[50];
    float totalHApSemana;

    for(j=0;j<tamProfs;j++)
    {
        printf(">> Cadastrar professor: %d\n", j);
        numRegistro=j;

        fflush(stdin);
        printf("Digite o nome: ");
        gets(nome);

        printf("Menu de opcoes para titulos:\n");
        for(i=0;i<tamTitulos;i++)
        {
            printf("%d - Para o titulo %s\n", vetorTitulos[i].cod_titulo, vetorTitulos[i].descricao);
        }
        printf("Digite o numero do titulo: ");
        do
        {
            scanf("%d", &cod_titulo);

            if(cod_titulo<0 && cod_titulo>tamTitulos)
            {
                printf("Numero invalido!");
                printf("Digite um numero maior positivo e menor que %d: ", tamTitulos);
            }
        } while (cod_titulo<0 && cod_titulo>tamTitulos);

        printf("\nDigite o total de h/a por semana: ");
        do
        {
            scanf("%f", &totalHApSemana);
            if(totalHApSemana<0)
            {
                printf("Valor invalido!");
                printf("\nDigite um valor maior que 0: ");
            }

        } while (totalHApSemana<0);

        printf("\n");

        fprintf(arqProfs, "\n%d;%s;%d;%.2f", numRegistro, nome, cod_titulo, totalHApSemana);

    }

    fflush(stdin);
    fclose(arqProfs);

}


void lerProfsArquivo(Professor vetorProfessores[])
{
    FILE *arqProfs;
    arqProfs = fopen("Profs.txt", "r");

    char linha[100];
    char *result;
    char *informacoes_linha[4];
    int i=0;
    int j=0;

    char *substring;

    while (!feof(arqProfs))
    {
        result = *fgets (linha, 100, arqProfs);
        if(j!=0)
        {
            strSplitProf(linha, informacoes_linha, ";",4);

            vetorProfessores[i].numRegistro = atoi(informacoes_linha[0]);

            strcpy(vetorProfessores[i].nome, (const char*)(informacoes_linha[1]) );
            vetorProfessores[i].cod_titulo = atoi(informacoes_linha[2]);
            vetorProfessores[i].totalHApSemana = atof(informacoes_linha[3]);

            i++;
        }
        j++;
    }
    fclose(arqProfs);
}

void printarRelacao(Professor vetorProfessores[], Titulos vetorTitulos[])
{

    int i;
    printf("N do registro | Nome | Titulo | Valor hora/aula | Total H/A | Total geral\n");
    for(i=0;i<tamProfs;i++)
    {
        printf("%d | %s | %s | R$ %.2f | %.2f | R$ %.2f\n", vetorProfessores[i].numRegistro, vetorProfessores[i].nome, vetorTitulos[vetorProfessores[i].cod_titulo].descricao, vetorTitulos[vetorProfessores[i].cod_titulo].valorPHA, vetorProfessores[i].totalHApSemana, (vetorTitulos[vetorProfessores[i].cod_titulo].valorPHA * vetorProfessores[i].totalHApSemana));

    }
}
