#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int linhas, colunas;
    int i, j;

    printf("Quantas linhas? ");
    scanf("%d", &linhas);
    printf("Quantas colunas? ");
    scanf("%d", &colunas);

    int A[linhas][colunas], T[colunas][linhas];

    printf("\n");
    for(i=0;i<linhas;i++)
    {
        for(j=0;j<colunas;j++)
        {
            printf("Preencha posicao %d | %d: ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }


    for(i=0;i<linhas;i++)
    {
        for(j=0;j<colunas;j++)
        {
            T[j][i]=A[i][j];
        }
    }

    printf("\nMatriz A: ");
    for(i=0;i<linhas;i++)
    {
        printf("\n");
        for(j=0;j<colunas;j++)
        {
            printf("%d | ", A[i][j]);
        }
    }

    printf("\nMatriz T: ");
    for(i=0;i<colunas;i++)
    {
        printf("\n");
        for(j=0;j<linhas;j++)
        {
            printf("%d | ", T[i][j]);
        }
    }


    return 0;
}
