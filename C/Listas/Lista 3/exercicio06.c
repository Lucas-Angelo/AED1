#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, t, seq, soma;
    seq = 0;
    soma = 0;
    printf("Quantos termos deseja? ");
    scanf("%i", &t);
    printf("\n0 ");
    for(i=0; i<t; i++)
    {
        seq = seq + 2;
        printf("%i ", seq);
        soma += seq;
    }
    printf("\nSoma e igual a: %i", soma);
    return 0;
}
