#include <stdio.h>
#include <stdlib.h>
float funcaoTotal(float valorImposto, int meses);
int main()
{
    int i, meses=0;
    float valorImposto=0, valorTotal=0;
    printf("Programa para calcular o valor total de atraso.\n");
    for(i=0; i<10; i++)
    {
        printf("\nQual o valor do imposto? ");
        scanf("%f", &valorImposto);
        if(valorImposto>0)
        {
        printf("\nQuantos meses atrasado? ");
        scanf("%i", &meses);
        if(meses>=1 && meses<=12)
        {
        valorTotal+=funcaoTotal(valorImposto, meses);
        }
        else
        {
            printf("Digite um valor valido para os meses, de 1 ate 12.");
            i--;
        }
        }
        else
        {
            printf("Digite um valor valido para o imposto, acima de 0.");
            i--;
        }
    }
    printf("\nO valor total dos impostos e de: R$%.2f\n", valorTotal);
    return 0;
}
float funcaoTotal(float valorImposto, int meses)
{
    float dividaUnica=0;
    if(valorImposto<50)
    {
        dividaUnica = valorImposto+(valorImposto*(0.01*meses));
    }
    else if(valorImposto>=50 && valorImposto<180)
    {
        dividaUnica = valorImposto+(valorImposto*(0.02*meses));
    }
    else if(valorImposto>=180 && valorImposto<500)
    {
        dividaUnica = valorImposto+(valorImposto*(0.04*meses));
    }
    else if(valorImposto>=500 && valorImposto<1200)
    {
        dividaUnica = valorImposto+(valorImposto*(0.07*meses));
    }
    else
    {
        dividaUnica = valorImposto+(valorImposto*(0.10*meses));
    }
    return dividaUnica;
}
