#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define linhas 5
#define colunas 3

int main()
{
    int matriz[linhas][colunas], precos[3], quantPorArm[4]={0, 0, 0, 0}, maiorEst2, totalPorArm[]= {0, 0, 0, 0}, menorEstoque, custoTotal[]={1, 1, 1}, cTotalPArmazem[]={0, 0, 0, 0};
    int i, j, z=0;

    for(i=0;i<linhas-1;i++)
    {
        for(j=0;j<colunas;j++)
        {
            printf("Armazem %d | %d Produto: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n");

    for(i=0;i<colunas;i++)
    {
        printf("Preco do produto %d: ", i+1);
        scanf("%d", &precos[i]);
    }

    for(i=0;i<linhas;i++)
    {
        for(j=0;j<colunas;j++)
        {
            if(i==4)
            {
                matriz[i][j]=precos[z];
                z++;
            }
        }
    }

    for(i=0;i<linhas-1;i++)
    {
        for(j=0;j<colunas;j++)
        {
            quantPorArm[i]+=matriz[i][j];
        }
    }

    for(i=0;i<4;i++)
    {
        printf("\nArmazem %d, quantidade de itens: %d", i+1, quantPorArm[i]);
    }

    maiorEst2=matriz[0][0];
    for(i=0;i<linhas-1;i++)
    {
        for(j=0;j<colunas;j++)
        {
            if(j==1)
            {
                if(matriz[i][j]>maiorEst2)
                {
                    maiorEst2=i+1;
                }
            }
        }
    }

    printf("\n\nMaior estoque do produto 2, maior no armazem: %d", maiorEst2);

    for(i=0;i<1;i++)
    {
        for(j=0;j<colunas;j++)
        {
            totalPorArm[i]+=matriz[i][j];
        }
    }

    for(i=0;i<linhas-1;i++)
    {
        for(j=0;j<colunas;j++)
        {
            totalPorArm[i]+=matriz[i][j];
            if(totalPorArm[i]<menorEstoque)
            {
                menorEstoque=i+1;
            }
        }
    }

    printf("\n\nO menor estoque e no armazem: %d\n", i);

    for(j=0;j<colunas;j++)
    {
        for(i=0;i<linhas;i++)
        {
            custoTotal[j]*=matriz[i][j];
        }
    }

    for(i=0;i<3;i++)
    {
        printf("\nCusto total do produto %d e: %d", i+1, custoTotal[i]);
    }

    for(i=0;i<linhas-1;i++)
    {
        for(j=0;j<colunas;j++)
        {
            cTotalPArmazem[i]+=precos[j]*matriz[i][j];
        }
    }

    printf("\n");
    for(i=0;i<4;i++)
    {
        printf("\nCusto total do armazem %d e: %d", i+1, cTotalPArmazem[i]);
    }
    printf("\n");


    return 0;
}
