#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 typedef struct Empregado{
    int matricula;
    char nome[100];
    float salario;
}Empregado;

int numeroEmpregados = 0;
void lerEmpregadosArquivo(Empregado VetorEmpregados[]);
void ListaCompleta(Empregado VetorEmpregados[]);
void strSplit(char *strTOsplit,char *strArr[], char *strSeparet,int nArr);
float calcularMedia(Empregado VetorEmpregados[]);
void procurarAbaixo(Empregado VetorEmpregados[]);
int calcularAcima(Empregado VetorEmpregados[]);
void verificarNome(Empregado VetorEmpregados[]);
void procurarMenor(Empregado VetorEmpregados[]);
void printar(Empregado VetorEmpregados[], int posicao);
float procurarMaior(Empregado VetorEmpregados[]);

int main()
{
    Empregado VetorEmpregados[1000];
    lerEmpregadosArquivo(VetorEmpregados);
    ListaCompleta(VetorEmpregados);
    printf("\nA media salarial e: R$%.2f\n", calcularMedia(VetorEmpregados));
    procurarAbaixo(VetorEmpregados);
    printf("\nA quantidade de empregados com salario acima da media e: %d\n", calcularAcima(VetorEmpregados));
    verificarNome(VetorEmpregados);
    procurarMenor(VetorEmpregados);
    printf("\nO maior salario e: R$%.2f\n", procurarMaior(VetorEmpregados));
    printf("\nFim do programa!\n");
    return 0;
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

void  lerEmpregadosArquivo(Empregado VetorEmpregados[])
{
    FILE *arquivo;
    arquivo = fopen("empregados.txt", "r");
    char linha[100];
    char *result;
    char *informacoes_linha[3];
    int i =0;
    while (!feof(arquivo))  // Enquando não chegar no fim do arquivo..
    {
        result = *fgets (linha, 100, arquivo);//Leitura de uma linha do arquivo...
        strSplit(linha, informacoes_linha, ";",3); //Separa os campos e os armazena no vetor de 3 posições chamado informacoes_linha
        //Cada posição do vetor VetorEmpregados guarda não so uma mas tres informações.
        VetorEmpregados[i].matricula = atoi(informacoes_linha[0]);
        strcpy(VetorEmpregados[i].nome, (const char*)(informacoes_linha[1]) );
        VetorEmpregados[i].salario = atof(informacoes_linha[2]);
        i++;
    }
    numeroEmpregados = i;
}

void ListaCompleta(Empregado VetorEmpregados[])
{
    int i;
    for (i = 0; i < numeroEmpregados; i++)
    {
        printf("%s : %d : %.2f \n", VetorEmpregados[i].nome, VetorEmpregados[i].matricula,VetorEmpregados[i].salario);
    }
}

float calcularMedia(Empregado VetorEmpregados[])
{
    FILE *arquivo;
    arquivo = fopen("empregados.txt", "r");
    char linha[100];
    char *result;
    char *informacoes_linha[3];
    float somatorio=0;
    int i=0;

    while (!feof(arquivo))
    {
        result = *fgets (linha, 100, arquivo);
        strSplit(linha, informacoes_linha, ";",3);

        VetorEmpregados[i].salario = atof(informacoes_linha[2]);

        somatorio += VetorEmpregados[i].salario;
        i++;
    }

    float media = somatorio/numeroEmpregados;
    return media;
}

void procurarAbaixo(Empregado VetorEmpregados[])
{
    FILE *arquivo;
    arquivo = fopen("empregados.txt", "r");
    float salarioMedio = calcularMedia(VetorEmpregados);
    char linha[100];
    char *result;
    char *informacoes_linha[3];
    int i=0;
    while (!feof(arquivo))
    {
        result = *fgets (linha, 100, arquivo);
        strSplit(linha, informacoes_linha, ";",3);

        VetorEmpregados[i].matricula = atoi(informacoes_linha[0]);
        strcpy(VetorEmpregados[i].nome, (const char*)(informacoes_linha[1]) );
        VetorEmpregados[i].salario = atof(informacoes_linha[2]);

        if(VetorEmpregados[i].salario<salarioMedio)
        {
            printf("\nFuncionario com salario abaixo da media:\nMatricula: %d\nNome: %s\n", VetorEmpregados[i].matricula, VetorEmpregados[i].nome);
        }

        i++;
    }

}

int calcularAcima(Empregado VetorEmpregados[])
{
    FILE *arquivo;
    arquivo = fopen("empregados.txt", "r");
    float salarioMedio = calcularMedia(VetorEmpregados);
    int quant=0;
    char linha[100];
    char *result;
    char *informacoes_linha[3];
    int i=0;
    while (!feof(arquivo))
    {
        result = *fgets (linha, 100, arquivo);
        strSplit(linha, informacoes_linha, ";",3);

        VetorEmpregados[i].salario = atof(informacoes_linha[2]);

        if(VetorEmpregados[i].salario>salarioMedio)
        {
            quant++;
        }

        i++;
    }

    return quant;
}

void verificarNome(Empregado VetorEmpregados[])
{
    FILE *arquivo;
    arquivo = fopen("empregados.txt", "r");
    char nome[50];
    int verificar=0;
    printf("\nDigite o nome: ");
    gets(nome);
    char linha[100];
    char *result;
    char *informacoes_linha[3];
    int i=0;
    while (!feof(arquivo))
    {
        result = *fgets (linha, 100, arquivo);
        strSplit(linha, informacoes_linha, ";",3);

        strcpy(VetorEmpregados[i].nome, (const char*)(informacoes_linha[1]) );

        if(strcmp(VetorEmpregados[i].nome, nome)==0)
        {
            verificar=1;
        }


        i++;
    }

    if(verificar==1)
    {
        printf("Nome existente\n");
    }
    else
    {
        printf("Nome nao existente\n");
    }

}

void procurarMenor(Empregado VetorEmpregados[])
{
    FILE *arquivo;
    arquivo = fopen("empregados.txt", "r");

    float menorSalario;
    int posicao=0;
    char linha[100];
    char *result;
    char *informacoes_linha[3];
    int i=0;

    while (!feof(arquivo))
    {
        result = *fgets (linha, 100, arquivo);
        strSplit(linha, informacoes_linha, ";",3);

        VetorEmpregados[i].matricula = atoi(informacoes_linha[0]);
        strcpy(VetorEmpregados[i].nome, (const char*)(informacoes_linha[1]) );
        VetorEmpregados[i].salario = atof(informacoes_linha[2]);

        if(i==0)
        {
            menorSalario = VetorEmpregados[0].salario;
        }

        if(VetorEmpregados[i].salario<menorSalario)
        {
            menorSalario=VetorEmpregados[i].salario;
            posicao=i;
        }


        i++;
    }

    printar(VetorEmpregados, posicao);

}

void printar(Empregado VetorEmpregados[], int posicao)
{
    FILE *arquivo;
    arquivo = fopen("empregados.txt", "r");

    char linha[100];
    char *result;
    char *informacoes_linha[3];
    int i=0;

    while (!feof(arquivo))
    {
        result = *fgets (linha, 100, arquivo);
        strSplit(linha, informacoes_linha, ";",3);

        VetorEmpregados[i].matricula = atoi(informacoes_linha[0]);
        strcpy(VetorEmpregados[i].nome, (const char*)(informacoes_linha[1]) );
        VetorEmpregados[i].salario = atof(informacoes_linha[2]);


        if(i==posicao)
        {
            printf("\nO empregado com menor salario e: \nNome: %s\nMatricula: %d\n", VetorEmpregados[posicao].nome, VetorEmpregados[posicao].matricula);
        }

        i++;
    }
}

float procurarMaior(Empregado VetorEmpregados[])
{
    FILE *arquivo;
    arquivo = fopen("empregados.txt", "r");

    char linha[100];
    char *result;
    char *informacoes_linha[3];
    int i=0;
    float maiorSalario;

    while (!feof(arquivo))
    {
        result = *fgets (linha, 100, arquivo);
        strSplit(linha, informacoes_linha, ";",3);

        VetorEmpregados[i].salario = atof(informacoes_linha[2]);

        if(i==0)
        {
            maiorSalario=VetorEmpregados[i].salario;
        }

        if(VetorEmpregados[i].salario>maiorSalario)
        {
            maiorSalario = VetorEmpregados[i].salario;
        }

        i++;
    }

    return maiorSalario;

}
