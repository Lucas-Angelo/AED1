#include <stdio.h>
#include <stdlib.h>

int main()
{

    float n1, n2, subtracao;

    printf("Programa de subtrair dois numeros!\n");

    printf("Qual o primeiro numero? ");
    scanf("%f", &n1);

    printf("Qual o segundo numero? ");
    scanf("%f", &n2);

    subtracao = n1 / n2;

    printf("A subtracao entre %.2f e %.2f = %.2f \n", n1, n2, subtracao);

    system("PAUSE");
    return 0;
}
