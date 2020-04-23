#include <stdio.h>
#include <stdlib.h>
int main()
{
    float custoF, custoC;
    printf("Qual o custo de fabrica do seu novo carro? ");
    scanf("%f", &custoF);
    if(custoF <= 28000)
    {
        custoC = custoF + (custoF*0.05);
        printf("O custo do consumidor com a aplicacao de impostos no seu carro e de: R$%.2f\n\n", custoC);
    }
    else if(custoF > 28000 && custoF < 45000)
    {
        custoC = custoF + (custoF*0.10) + (custoF*0.15);
        printf("O custo do consumidor com a aplicacao de impostos no seu carro e de: R$%.2f\n\n", custoC);
    }
    else
    {
        custoC = custoF + (custoF*0.15) + (custoF*0.20);
        printf("O custo do consumidor com a aplicacao de impostos no seu carro e de: R$%.2f\n\n", custoC);
    }
    return 0;
}
