#include <stdio.h>
#include <stdlib.h>
#define tam1 5
#define tam2 10
int main()
{
    int vetor1[tam1], vetor2[tam1], vetor3[tam2],i,j=0;
    printf("Preencher vetor um>\n");
    for(i=0;i<tam1;i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &vetor1[i]);
        vetor3[j]=vetor1[i];
        j+=2;
    }
    j=1;
    printf("\nPreencher vetor dois>\n");
    for(i=0;i<tam1;i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &vetor2[i]);
        vetor3[j]=vetor1[i];
        j+=2;
    }
    printf("Vetor tres: ");
    for(i=0;i<tam2;i++)
    {
        printf("%d | ", vetor3[i]);
    }
    return 0;
}
