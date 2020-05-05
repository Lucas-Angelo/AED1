#include <stdio.h>
#include <stdlib.h>

int main()
{

    float preco, novoPreco;

    printf("Qual o preco do produto? ");
    scanf("%f", &preco);

    if(preco <= 50)
    {
    novoPreco = preco * 1.05;
    }

    else if(preco <100)
    {
    novoPreco = preco * 1.10;
    }

    else
    {
    novoPreco = preco * 1.15;
    }

    if(novoPreco <= 80)
    {
    printf("O produto e classificado como: BARATO\nCom o valor de: R$%.2f\n\n", novoPreco);
    }

    else if(novoPreco <= 120)
    {
    printf("O produto e classificado como: NORMAL\nCom o valor de: R$%.2f\n\n", novoPreco);
    }

    else if(novoPreco <= 200)
    {
    printf("O produto e classificado como: CARO\nCom o valor de: R$%.2f\n\n", novoPreco);
    }


    else
    {
    printf("O produto e classificado como: MUITO CARO\nCom o valor de: R$%.2f\n\n", novoPreco);
    }


    system("PAUSE");
    return 0;
}
