#include <stdio.h>
#include <stdlib.h>
#define tam 4

int main()
{
    int matriz[tam][tam], i, j, z, somatorio=0;

    for(i=0;i<tam;i++)
    {
        for(j=0;j<tam;j++)
        {
            printf("Posicao  %d | %d - Digite um numero: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            printf("");
        }
    }

    printf("\n-------------------------\n\n");
    printf("Diagonal principal: \n");
    for(i=0;i<tam;i++)
    {
        printf("\n");
        for(j=0;j<tam;j++)
        {
            if(i==j)
            {
                printf("%d | ", matriz[i][j]);
            }
        }
    }
    printf("\n\n-------------------------\n\n");

    for(i=0;i<tam;i++)
    {
        for(j=0;j<tam;j++)
        {
            if(i==j)
            {
                for(z=0;z<j;z++)
                {
                    somatorio+=matriz[i][z];
                }
            }
        }
    }


    printf("Soma dos elementos: %d", somatorio);
    return 0;
}
