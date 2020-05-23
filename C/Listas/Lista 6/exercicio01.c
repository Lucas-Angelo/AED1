#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define linhas 4
#define colunas 3

int main()
{
    int matriz[linhas][colunas], i, j, maiorNumero, menorNumero, linhaMaior, colunaMaior, linhaMenor, colunaMenor, somatorio=0;
    float media;

    for(i=0;i<linhas;i++)
    {
        for(j=0;j<colunas;j++)
        {
            printf("Posicao  %d | %d - Digite um numero: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            printf("");
        }
    }

    maiorNumero=matriz[0][0];
    linhaMaior=0;
    colunaMaior=0;

    menorNumero=matriz[0][0];
    linhaMenor=0;
    colunaMenor=0;

    printf("\n-------------------------\n\n");
    printf("Matriz: \n");
    for(i=0;i<linhas;i++)
    {
        printf("\n");
        for(j=0;j<colunas;j++)
        {
            printf("%d | ", matriz[i][j]);
            somatorio+=matriz[i][j];
            if(matriz[i][j]>maiorNumero)
            {
                maiorNumero=matriz[i][j];
                linhaMaior=i;
                colunaMaior=j;
            }
            if(matriz[i][j]<menorNumero)
            {
                menorNumero=matriz[i][j];
                linhaMenor=i;
                colunaMaior=j;
            }
        }
    }
    printf("\n\n-------------------------\n\n");

    media=(somatorio*1.0)/12.0;

    printf("A media e: %.2f\n", media);

    printf("Maior numero: %d Posicao: %d | %d\n", maiorNumero, linhaMaior+1, colunaMaior+1);
    printf("Menor numero: %d Posicao: %d | %d\n", menorNumero, linhaMenor+1, colunaMenor+1);


    return 0;
}
