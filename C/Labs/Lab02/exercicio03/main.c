#include <stdio.h>
#include <stdlib.h>

int main()
{

    float n1, n2, divisao;

    printf("Programa divisor de dois numeros!\n");

    printf("Qual o primeiro numero? ");
    scanf("%f", &n1);

    printf("Qual o segundo numero? ");
    scanf("%f", &n2);

    divisao = n1 / n2;

    printf("A divisao entre %.2f e %.2f = %.2f \n", n1, n2, divisao);

    system("PAUSE");
    return 0;
}
