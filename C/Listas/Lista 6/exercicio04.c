#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int matrizOriginal[10][10];
    int i, j, z=0;

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            printf("Preencha a posicao %d | %d: ", i+1, j+1);
            scanf("%d", &matrizOriginal[i][j]);
        }
    }

    int matrizModificada[10][10];
    int linha2[10], linha8[10];

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            matrizModificada[i][j]=matrizOriginal[i][j];
            if(i==2)
            {
                linha2[j]=matrizOriginal[2][j];
            }
            if(i==8)
            {
                linha8[j]=matrizOriginal[8][j];
            }
        }
    }

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(i==2)
            {
                matrizModificada[2][j]=linha8[j];
            }
            if(i==8)
            {
                matrizModificada[8][j]=linha2[j];
            }
        }
    }

    printf("Matriz Original: ");
    for(i=0;i<10;i++)
    {
        printf("\n");
        for(j=0;j<10;j++)
        {
            printf("%d | ", matrizOriginal[i][j]);
        }
    }


    int matrizFinal[10][10];
    int principal[10], secundario[10];



    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            matrizFinal[i][j]=matrizModificada[i][j];
        }
    }

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(i==j)
            {
                principal[i]=matrizModificada[i][j];
            }
        }
    }

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(j==10-i-1)
            {
                secundario[i]=matrizModificada[i][j];
            }
        }
    }

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(j==(10-i-1))
            {
                matrizFinal[i][j]=principal[i];
            }
        }
    }

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(i==j)
            {
                matrizFinal[i][j]=secundario[i];
            }
        }
    }

    printf("\n\nMatriz Final: ");
    for(i=0;i<10;i++)
    {
        printf("\n");
        for(j=0;j<10;j++)
        {
            printf("%d | ", matrizFinal[i][j]);
        }
    }
    printf("\n");

    return 0;
}
