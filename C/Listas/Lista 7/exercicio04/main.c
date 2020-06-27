#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define quantH 50

typedef struct habitante{
    char sexo; // F - para feminino, M - para masculino
    char corDosOlhos; //- Azuis, V - Verdes ou C – Castanhos)
    float altura;
    int idade;
} Habitante;

void lerDados();
void  lerArquivoPesquisa(Habitante vetorHabitante[]);
float funcaoMediaA(Habitante vetorHabitante[]);
int maiorIdades(Habitante vetorHabitante[]);
int quantidade(Habitante vetorHabitante[]);
float percentual(Habitante vetorHabitante[]);

int main()
{
    printf("Pesquisa:");
    Habitante vetorHabitantes[quantH];

    //lerDados();
    lerArquivoPesquisa(vetorHabitantes);

    printf("A media de idade e: %.2f", funcaoMediaA(vetorHabitantes));
    printf("\nA maior idade e: %d", maiorIdades(vetorHabitantes));
    printf("\nA quantidade e: %d", quantidade(vetorHabitantes));
    printf("\nO percentual e: %.2f", percentual(vetorHabitantes));

    return 0;
}

void lerDados()
{
    FILE *arquivo;
    arquivo = fopen("pesquisa.txt", "w");
    char sexo, corDosOlhos;
    float altura;
    int i, idade;

    for(i=0;i<quantH;i++)
    {
        printf("\nDados HABITANTE: %d\n", i+1);
        printf("\nMenu de opcoes para sexo:");
        printf("\nF - Para feminino\nM - Para masculino\n");
        do
        {
            printf("Digite uma opcao: ");
            scanf(" %c", &sexo);
            sexo = toupper(sexo);
            if(sexo!='M' && sexo!='F')
                printf("Sexo Invalido!\nUnicas opcoes disponiveis: F ou M\n");
        } while (sexo!='M' && sexo!='F');

        printf("\nMenu de opcoes para cor dos olhos:");
        printf("\nA - Para azuis\nV - Para verdes\nC - Para castanhos\n");
        do
        {
            printf("Digite uma opcao: ");
            scanf(" %c", &corDosOlhos);
            corDosOlhos = toupper(corDosOlhos);
            if(corDosOlhos!='A' && corDosOlhos!='V' && corDosOlhos!='C')
                printf("Cor dos olhos Invalida!\nUnicas opcoes disponiveis: A, V e C\n");
        } while (corDosOlhos!='A' && corDosOlhos!='V' && corDosOlhos!='C');

        do
        {
            printf("\nDigite a altura: ");
            scanf("%f", &altura);
            if(altura<=0.0)
                printf("Altura invalida\nEscreva um numero maior que 0");
        } while (altura<=0.0);

        do
        {
            printf("\nDigite a idade: ");
            scanf("%d", &idade);
            if(idade<=0)
                printf("Idade invalida\nEscreva um numero maior que 0");
        } while (idade<=0);

        if(i==0)
            fprintf(arquivo, "%c;%c;%.2f;%d", sexo, corDosOlhos, altura, idade);
        else
            fprintf(arquivo, "\n%c;%c;%.2f;%d", sexo, corDosOlhos, altura, idade);
    }
    fclose(arquivo);
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

void  lerArquivoPesquisa(Habitante vetorHabitante[])
{
    FILE *arquivo;
    arquivo = fopen("pesquisa.txt", "r");
    char linha[100];
    char *result;
    char *informacoes_linha[4];
    int i =0;
    while (!feof(arquivo))
    {
        result = *fgets (linha, 100, arquivo);
        strSplit(linha, informacoes_linha, ";",4);

        vetorHabitante[i].sexo = linha[0];
        vetorHabitante[i].corDosOlhos = linha[2];
        vetorHabitante[i].altura = atof(informacoes_linha[2]);
        vetorHabitante[i].idade = atoi(informacoes_linha[3]);

        i++;
    }

    fclose(arquivo);
}

float funcaoMediaA(Habitante vetorHabitante[])
{
    int i;
    int cont=0;
    float somatorio=0;
    float media=0;

    for(i=0;i<quantH;i++)
    {
        if(vetorHabitante[i].corDosOlhos=='C' && vetorHabitante[i].altura>1.60)
        {
            somatorio+=(vetorHabitante[i].idade)*1.0;
            cont++;
        }
    }
    media = (somatorio*1.0)/(cont*1.0);

    return media;
}

int maiorIdades(Habitante vetorHabitante[])
{
    int maiorIdade;
    int i;

    maiorIdade=vetorHabitante[0].idade;

    for(i=0;i<quantH;i++)
    {
        if(vetorHabitante[i].idade>=maiorIdade)
            maiorIdade=vetorHabitante[i].idade;
    }

    return maiorIdade;
}

int quantidade(Habitante vetorHabitante[])
{
    int i, cont=0;

    for(i=0;i<quantH;i++)
    {
        if(vetorHabitante[i].sexo=='F')
        {
            if((vetorHabitante[i].idade>20 && vetorHabitante[i].idade<=45) || (vetorHabitante[i].corDosOlhos=='V' && vetorHabitante[i].altura<1.70))
                cont++;
        }
    }
    return cont;
}

float percentual(Habitante vetorHabitante[])
{
    int i, cont=0;

    for(i=0;i<quantH;i++)
    {
        if(vetorHabitante[i].sexo=='M')
            cont++;
    }

    return (cont*1.0)/(quantH*1.)*100;
}
