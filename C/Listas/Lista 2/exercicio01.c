#include <stdio.h>
#include <stdlib.h>
int main()
{
    float num1, num2, soma;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    soma = num1 + num2;
    if(soma>10)
    {
    printf("A soma dos numeros e: %.2f\n", soma);
    }
    else
    {
    printf("Os numeros digitados foram: %.2f, %.2f\n", num1, num2);
    }
    return 0;
}
