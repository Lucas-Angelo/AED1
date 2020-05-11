#include <stdio.h>
#include <stdlib.h>
#define tam 6
int main()
{
    int vetor[tam],i,cont=0,vetM3[tam],vetResto[tam],mais1=0;
    for(i=0;i<tam;i++)
    {
        do
        {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
        printf("");
        if(vetor[i]<=0)
        {
            printf("Digite um valor valido.\n");
        }
        }while(vetor[i]<=0);
    }

    for(i=0;i<tam;i++)
    {
        if((vetor[i]%3)==0)
        {
            vetM3[mais1] = vetor[i];
            cont++;
            mais1++;
        }
    }
    mais1=0;
    for(i=0;i<tam;i++)
    {
        if((vetor[i]%3)!=0)
        {
            vetResto[mais1] = vetor[i];
            mais1++;
        }
    }

    printf("Valores multiplos de tres: ");
    for(i=0;i<cont;i++)
    {
        printf("%d | ", vetM3[i]);
    }
    printf("\nOs outros valores: ");
    for(i=0;i<tam-cont;i++)
    {
        printf("%d | ", vetResto[i]);
    }
    return 0;
}
