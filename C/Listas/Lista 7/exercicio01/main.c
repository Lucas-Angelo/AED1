#include <stdio.h>
#include <stdlib.h>

#define qMeses 12
#define qDados 7

typedef struct Meses
{
    float quantM1;
    float lucroM1;
    float quantM2;
    float lucroM2;
} Meses;

void dados();
void strSplit(char *strTOsplit,char *strArr[], char *strSeparet,int nArr);
float lerVetorMeses(Meses vetorMeses[]);

int main()
{
    Meses vetorMeses[999];

    dados();
    printf("O lucro anual foi de: R$%.2f", (lerVetorMeses(vetorMeses)*1000.0));

    return 0;
}

void dados()
{

    FILE *arquivo;
    arquivo = fopen("controle.txt", "w");

    char nomeMeses[12][50]={"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};

    float matrizDados[qMeses][qDados]; // Meses (mes, quantidade M1, quantidade M2, custo M1, custo M2, lucro M1, lucro M2
    int i, j;

    for(i=0;i<qMeses;i++)
    {
        for(j=0;j<qDados;j++)
        {
            if(j==0)
            {
                matrizDados[i][0]=i;
            }
        }
    }

    for(i=0;i<qMeses;i++)
    {
        for(j=0;j<qDados;j++)
        {
            if(j==1)
            {
                printf("Quantos motores M1 produzidos em %s? ", nomeMeses[i]);
                scanf("%f", &matrizDados[i][j]);
            }
            else if(j==2)
            {
                printf("Qual o custo do motor M1 em %s? ", nomeMeses[i]);
                scanf("%f", &matrizDados[i][j]);
            }
            else if(j==3)
            {
                printf("Qual o lucro do motor M1 em %s? ", nomeMeses[i]);
                scanf("%f", &matrizDados[i][j]);
            }
            if(j==4)
            {
                printf("Quantos motores M2 produzidos em %s? ", nomeMeses[i]);
                scanf("%f", &matrizDados[i][j]);
            }
            else if(j==5)
            {
                printf("Qual o custo do motor M2 em %s? ", nomeMeses[i]);
                scanf("%f", &matrizDados[i][j]);
            }
            else if(j==6)
            {
                printf("Qual o lucro do motor M2 em %s? ", nomeMeses[i]);
                scanf("%f", &matrizDados[i][j]);
            }
        }

        fprintf(arquivo, "\n%.1f;%.2f;%.2f;%.2f;%.2f;%.2f;%.2f", matrizDados[i][0], matrizDados[i][1], matrizDados[i][2], matrizDados[i][3], matrizDados[i][4], matrizDados[i][5], matrizDados[i][6]);

    }

    for(i=0;i<qMeses;i++)
    {
        for(j=0;j<qDados;j++)
        {
            printf("%.2f | ", matrizDados[i][j]);
        }
        printf("\n");
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

float lerVetorMeses(Meses vetorMeses[])
{
    FILE *arquivo;
    arquivo = fopen("controle.txt", "r");

    char linha[100];
    char *result;
    char *informacoes_linha[7];
    int i=0;
    int j=0;

    float somatorio;
    while (!feof(arquivo))
    {
        result = *fgets (linha, 100, arquivo);
        if(j!=0)
        {
        strSplit(linha, informacoes_linha, ";",7);

        vetorMeses[i].lucroM1 = atof(informacoes_linha[3]);
        vetorMeses[i].quantM1 = atof(informacoes_linha[1]);
        vetorMeses[i].lucroM2 = atof(informacoes_linha[6]);
        vetorMeses[i].quantM2 = atof(informacoes_linha[4]);

        somatorio+=(vetorMeses[i].lucroM1*vetorMeses[i].quantM1);
        somatorio+=(vetorMeses[i].lucroM2*vetorMeses[i].quantM2);

        i++;
        };
        j++;
    }

    return somatorio;
}
