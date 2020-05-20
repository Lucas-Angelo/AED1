#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int vetor[10];
    int i;
    for(i=0;i<10;i++)
    {
        vetor[i] = lerNumero();
    }
    for(i=0;i<10;i++)
    {
        impNumero(vetor[i]);
    }

}

int lerNumero()
{
    int res;
    printf("Digite um numero: ");
    scanf("%d", &res);
    return res;
}

void impNumero(int numero)
{
    printf("%d ", numero);
}
