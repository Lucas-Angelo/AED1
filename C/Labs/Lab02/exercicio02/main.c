#include <stdio.h>
#include <stdlib.h>

int main()
{

    float n1, n2, n3, multiplic;

    printf("Programa multiplicador de 3 numeros!\n");

    printf("Qual o primeiro numero? ");
    scanf("%f", &n1);

    printf("Qual o segundo numero? ");
    scanf("%f", &n2);

    printf("Qual o terceiro numero? ");
    scanf("%f", &n3);

    multiplic = n1 * n2 * n3;

    printf("A multiplicacao entre %.2f, %.2f e %.2f = %.2f \n", n1, n2, n3, multiplic);

    system("PAUSE");
    return 0;
}
