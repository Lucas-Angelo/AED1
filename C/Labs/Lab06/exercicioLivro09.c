#include <stdio.h>
#include <stdlib.h>
int somaDiv(int num);

int main()
{
    int num, res;
    printf("Digite um numero inteiro e positivo: ");
    scanf("%i", &num);

    if(num>0)
    {
        res = somaDiv(num);
        printf("A soma dos divisores e: %i", res);
    }
    else
    {
        printf("Digite um numero valido. Inteiro e maior que 0.");
    }

    return 0;
}

int somaDiv(int num)
{
    int i=0;
    float somadosDiv=0;

    for(i=1; i<=num; i++)
    {
        if((num%i)==0)
        {
            somadosDiv+=i;
        }
    }

    return somadosDiv;
}
