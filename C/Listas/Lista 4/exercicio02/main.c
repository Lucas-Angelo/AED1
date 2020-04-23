#include <stdio.h>
#include <stdlib.h>
float novoPreco(float precoAtual);
int main()
{
    float preco, res;
    printf("Programa para calcular o custo do consumidor.\n\n");
    printf("Qual o preco de fabrica do novo carro? ");
    scanf("%f", &preco);
    if(preco>0)
    {
    res = novoPreco(preco);
    printf("O custo do consumidor com a aplicacao de impostos no seu carro e de: R$%.2f\n", res);
    }
    else
    {
        printf("\nDigite um valor valido para o preco, acima de 0.\n");
    }
    return 0;
}
float novoPreco(float custoF)
{
    float custoC;

    if(custoF <= 28000)
    {
        custoC = custoF + (custoF*0.05);
    }
    else if(custoF > 28000 && custoF < 45000)
    {
        custoC = custoF + (custoF*0.10) + (custoF*0.15);
    }
    else
    {
        custoC = custoF + (custoF*0.15) + (custoF*0.20);
    }
    return custoC;
}
