#include <stdio.h>
#include <stdlib.h>
int main()
{
    float num1, num2, soma, result;
    printf("Qual o valor do primeiro numero? ");
    scanf("%f", &num1);
    printf("Qual o valor do segundo numero? ");
    scanf("%f", &num2);
    soma = num1 + num2;
    if(soma > 5 && soma <= 10)
    {
        result = soma + 5;
        printf("O resultado e: %.2f\n\n", result);
    }
    else
    {
        result = soma - 3;
        printf("O resultado e: %.2f\n\n", result);
    }
    return 0;
}
