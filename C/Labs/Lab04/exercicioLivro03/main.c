#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i=0, idade=0, faixa1=0, faixa2=0, faixa3=0, faixa4= 0, faixa5=0;
    float porc1, porc5;


    for(i=0; i<8; i++)
    {
        printf("Qual a sua idade? ");
        scanf("%d", &idade);
        if(idade > 0 && idade <= 15)
        {
            faixa1++;
        }
        else if(idade > 15 && idade <= 30)
        {
            faixa2++;
        }
        else if(idade > 30 && idade <= 45)
        {
            faixa3++;
        }
        else if(idade>45 && idade <=60)
        {
            faixa4++;
        }
        else if(idade >60)
        {
            faixa5++;
        }
        else
        {
            printf("Valor invalido!");
            i--;
        }
    }

    printf("\nA quantidade de pessoas da faixa 1: %d\n", faixa1);
    printf("\nA quantidade de pessoas da faixa 2: %d\n", faixa2);
    printf("\nA quantidade de pessoas da faixa 3: %d\n", faixa3);
    printf("\nA quantidade de pessoas da faixa 4: %d\n", faixa4);
    printf("\nA quantidade de pessoas da faixa 5: %d\n", faixa5);

    if(faixa1 != 0)
    {
        porc1 = (faixa1 * 100)/i;
        printf("\n\nPorcentagem de pessoas na faixa 1 = %f\n", porc1);
    }
    if(faixa5 != 0)
    {
        porc5 = (faixa5 * 100)/i;
        printf("\nPorcentagem de pessoas na faixa 5 = %.2f%%\n", porc5);
    }

    return 0;
}
