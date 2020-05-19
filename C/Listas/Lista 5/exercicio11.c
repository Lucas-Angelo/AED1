#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 10
long int fatorial(int numero);

int main()
{
    long int vetor1[tam], vetor2[tam];
    int i;
    for(i=0;i<tam;i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor1[i]);
        printf("");
    }
    for(i=0;i<tam;i++)
    {
        vetor2[i] = fatorial(vetor1[i]);
    }
    for(i=0;i<tam;i++)
    {
        printf("%i ", vetor2[i]);
    }
    return 0;
}

long int fatorial(int numero)
{
    if(numero==0)
    {
        return 1;
    }
    else
    {
        return (numero*fatorial(numero-1));
    }
}
