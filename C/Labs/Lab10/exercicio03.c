#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define linha 4
#define coluna 3

int main()
{
    int matriz[linha][coluna], pares=0, i, j;
    float media=0, media2=0;

    for(i=0;i<linha;i++)
    {
        for(j=0;j<coluna;j++)
        {
            printf("Numero da posicao %d | %d: ", i, j);
            scanf("%d", &matriz[i][j]);
            printf("");
        }
    }

    for(i=0;i<linha;i++)
    {
        for(j=0;j<coluna;j++)
        {
            if(i%2==0)
            {
                pares+=matriz[i][j];
            }
        }
    }

    media = (pares*1.0)/24.0;
    media2= (pares*1.0)/6.0;

    printf("\nA media dos de linhas pares por todos elementos e: %.2f", media);
    printf("\nA media dos de linhas pares por quantia de linhas e: %.2f", media2);



    return 0;
}
