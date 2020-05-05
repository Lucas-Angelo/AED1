#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, max, n1=1, n2=1, sequen;

    printf("Quantos numeros da sequencia de Fibonacci vc quer mostrar? ");
    scanf("%i", &max);

    printf("\nNumeros: 1 1 ");
    for (i=1;i<=max;i++)
    {
        sequen = n1 + n2;
        n1 = n2;
        n2 = sequen;
        printf("%i ", n2);
    }

    return 0;
}
