#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define quantMani 5

void preencherArquivo();
float calcular(float matrizDados[quantMani][4], int i);

int main()
{
    preencherArquivo();
    return 0;
}

void preencherArquivo()
{
    FILE *arquivo;
    arquivo = fopen("Faturamento.txt", "w");

    float matrizDados[quantMani][4]; // Manicures [pes, maos, podologias, receber ]
    char nome[256];
    int i,j=0;
    float receber;

    for(i=0;i<quantMani;i++)
    {
        printf("Dados manicure %i\n", i+1);
        printf("Digite o nome da manicure? ");
        fflush(stdin);
        gets(nome);
        j=0;
        if(j==0)
        {
            printf("Digite a quantidade de pes: ");
            scanf("%f", &matrizDados[i][j]);
            j++;
        }
        if(j==1)
        {
            printf("Digite a quantidade de maos: ");
            scanf("%f", &matrizDados[i][j]);
            j++;
        }
        if(j==2)
        {
            printf("Digite a quantidade de podologias: ");
            scanf("%f", &matrizDados[i][j]);
            j++;
        }
        if(j==3)
        {
            matrizDados[i][j] = calcular(matrizDados, i);
            j++;
        }
        fprintf(arquivo, "%s;%.1f,%.1f,%.1f,%.2f\n", nome, matrizDados[i][0], matrizDados[i][1], matrizDados[i][2], matrizDados[i][3]);
        j=0;
    }

    fclose(arquivo);

}

float calcular(float matrizDados[quantMani][4], int i)
{
    return (matrizDados[i][0]*15 + matrizDados[i][1]*20 + matrizDados[i][2]*30)*0.3;
}

