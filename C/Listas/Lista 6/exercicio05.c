#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define linhas 4
#define colunas 5

int main()
{
    int matriz[linhas][colunas];
    int vetor[5];
    int i, j, verif;

    for(i=0;i<5;i++)
    {
        vetor[i]=0;
    }

    for(i=0;i<linhas;i++)
    {
        for(j=0;j<colunas;j++)
        {
            printf("Preencha a posicao %d | %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(j=0;j<colunas;j++)
    {
        for(i=0;i<linhas;i++)
        {
            vetor[j]+=matriz[i][j];
        }
    }

    printf("\n");

    for(i=0;i<5;i++)
    {
        if(vetor[i]>10)
            verif=1;
    }

    if(verif!=0)
    {
        for(i=0;i<5;i++)
        {
            if(vetor[i]>10)
                printf("%d\n", vetor[i]);
        }
    }
    else
        printf("Nenhum elemento maior que dez.");


    return 0;
}
