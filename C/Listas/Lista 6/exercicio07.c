#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Qprecos 3 /////////////////////////////////////////////////////
#define Qarmazens 2 /////////////////////////////////////////////////////
#define Qprodutos 3/////////////////////////////////////////////////////

int main()
{
    int precos[Qprecos], quantParma[Qarmazens][Qprodutos], i, j, quantToParma[]={0, 0}/*Aqui*/, totalPorProduto[]={0, 0, 0}/*Aqui*/, maiorEstoque=0, precoDele=0, menorEstoque, armaMenorEstoque, custoParma[]={0, 0};

    for(i=0;i<Qprecos;i++)
    {
        printf("Produto %d, qual o preco? ", i+1);
        scanf("%d", &precos[i]);
    }

    printf("\n");

    for(i=0;i<Qarmazens;i++)
    {
        for(j=0;j<Qprodutos;j++)
        {
            printf("Armazem %d tem quantos produtos? ", i+1);
            scanf("%d", &quantParma[i][j]);
        }
    }

    for(i=0;i<Qarmazens;i++)
    {
        printf("\n");
        for(j=0;j<Qprodutos;j++)
        {
            printf("%d | ", quantParma[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<Qprecos;i++)
    {
        printf("%d | ", precos[i]);
    }

    for(i=0;i<Qarmazens;i++)
    {
        for(j=0;j<Qprodutos;j++)
        {
            quantToParma[i]+=quantParma[i][j];
        }
    }

    for(i=0;i<Qarmazens;i++)
    {
        printf("\nArmazem %d, total de produtos: %d", i+1, quantToParma[i]);
    }

    for(j=0;j<Qprodutos;j++)
    {
        for(i=0;i<Qarmazens;i++)
        {
            totalPorProduto[j]+=quantParma[i][j];
        }
    }

    printf("\n");
    for(i=0;i<Qprodutos;i++)
    {
        printf("\nProduto %d, total estocado: %d", i+1, totalPorProduto[i]);
    }


    maiorEstoque=quantParma[0][0];
    for(i=0;i<Qarmazens;i++)
    {
        for(j=0;j<Qprodutos;j++)
        {
            if(quantParma[i][j]>maiorEstoque)
            {
                precoDele=precos[j];
            }
        }
    }

    printf("\n\nPreco do produto que possui maior estoque: %d", precoDele);

    menorEstoque=quantParma[0][0];
    armaMenorEstoque=0;
    for(i=0;i<Qarmazens;i++)
    {
        for(j=0;j<Qprodutos;j++)
        {
            if(quantParma[i][j]<menorEstoque)
            {
                menorEstoque=quantParma[i][j];
                armaMenorEstoque=i;
            }
        }
    }

    printf("\n\nMenor estoque e %d, no armazem: %d", menorEstoque, armaMenorEstoque+1);


    for(i=0;i<Qarmazens;i++)
    {
        for(j=0;j<Qprodutos;j++)
        {
            custoParma[i]+=quantParma[i][j]*precos[j];
        }
    }

    printf("\n");
    for(i=0;i<Qarmazens;i++)
    {
        printf("\nArmazem %d, custo: %d", i+1, custoParma[i]);
    }

    printf("\n");


    return 0;
}
