#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vetorOriginal[10], vetorInvertido[10], i, z=0;
    for(i=0;i<10;i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetorOriginal[i]);
        printf("");
    }
    for(i=9;i>=0;i--)
    {
        vetorInvertido[i]=vetorOriginal[z];
        z++;
    }
    printf("\nVetor Original: ");
    for(i=0;i<10;i++)
    {
        printf("%d | ", vetorOriginal[i]);
    }
    printf("\nVetor Invertido: ");
    for(i=0;i<10;i++)
    {
        printf("%d | ", vetorInvertido[i]);
    }
    return 0;
}
