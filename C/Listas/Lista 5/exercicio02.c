#include <stdio.h>
#include <stdlib.h>
#define tam 6
int main()
{
    int vetor[tam], i, pares=0, impares=0;
    for(i=0;i<tam;i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
        printf("");
    }
    for(i=0;i<tam;i++)
    {
        if(vetor[i]%2==0)
        {
            pares++;
        }
    }
    printf("\nO total de numeros pares e: %d. ", pares);
    printf("Sao eles: ");
    for(i=0;i<tam;i++)
    {
        if(vetor[i]%2==0)
        {
            printf("%d | ", vetor[i]);
        }
    }
    for(i=0;i<tam;i++)
    {
        if(vetor[i]%2!=0)
        {
            impares++;
        }
    }
    printf("\nO total de numeros impares e: %d. ", impares);
    printf("Sao eles: ");
    for(i=0;i<tam;i++)
    {
        if(vetor[i]%2!=0)
        {
            printf("%d | ", vetor[i]);
        }
    }
    return 0;
}
