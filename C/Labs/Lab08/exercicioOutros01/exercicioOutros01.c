#include <stdio.h>
#include <stdlib.h>
#define tam 15
int main()
{
    int vetor[tam], i,contI2=0;
    for(i=0;i<tam;i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
        printf("");
    }

    for(i=0;i<tam;i++)
    {
        if((vetor[i])==2)
        {
            contI2++;
        }
    }
    printf("\nQuantia de valores iguais a dois e: %d", contI2);

    printf("\nOs valores multiplos de tres: ");
    for(i=0;i<tam;i++)
    {
        if((vetor[i]%3)==0)
        {
            printf("%d | ", vetor[i]);
        }
    }

    printf("\nPosicoes com elementos multiplos de dois: ");
    for(i=0;i<tam;i++)
    {
        if((vetor[i]%2)==0)
        {
            printf("%d | ", i+1);
        }
    }
    return 0;
}
