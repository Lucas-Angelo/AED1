#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, positivos=0, negativos=0;
    printf("Qual o tamanho do vetor? ");
    scanf("%d", &n);
    int vetor[n];
    for(i=0;i<n;i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
        printf("");
    }
    printf("\nO vetor digitado foi: ");
    for(i=0;i<n;i++)
    {
        printf("%d | ", vetor[i]);
        if(vetor[i]>0)
        {
            positivos++;
        }
        if(vetor[i]<0)
        {
            negativos++;
        }
    }
    printf("\nA quantidade de numeros positivos e: %d", positivos);
    printf("\nA quantidade de numeros negativos e: %d", negativos);
    return 0;
}
