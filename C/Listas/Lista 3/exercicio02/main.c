#include <stdio.h>
#include <stdlib.h>
int main()
{
    float imposto, atraso, total;
    int meses, props;
    props = 0;
    imposto = 0;
    atraso = 0;
    total = 0;
    meses = 0;
    printf("Programa para calcular atraso do imposto predial.\n");
    for(props = 0; props < 10; props++)
    {
        printf("Qual o valor do imposto? ");
        scanf("%f", &imposto);
        printf("Quantos meses o ultimo imposto esta atrasado? ");
        scanf("%i", &meses);
        if(imposto >= 0 && meses >= 0)
        {
        if(imposto <= 50)
        {
            atraso = imposto + (imposto * (0.01 * meses));
        }
        else if(imposto>50 && imposto <= 180)
        {
            atraso = imposto + (imposto * (0.02 * meses));
        }
        else if(imposto>180 && imposto <= 500)
        {
            atraso = imposto + (imposto * (0.04 * meses));
        }
        else if(imposto>500 && imposto <= 1200)
        {
            atraso = imposto + (imposto * (0.07 * meses));
        }
        else
        {
            atraso = imposto + (imposto * (0.10 * meses));
        }
            total += atraso;
        }
        else
        {
            printf("\nNao foi possivel calcular, por favor informe valores validos.\n");
            props--;
        }
    }
    printf("O total a se pagar e: R$%.2f", total);
    return 0;
}
