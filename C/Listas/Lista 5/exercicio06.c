#include <stdio.h>
#include <stdlib.h>
#define tam 20
int main()
{
    int i, z=19;
    char A[tam] = {'A','G','Y','W','5','V','S','8','6','J','G','A','W','2','M','C','H','Q','6','L'}, B[tam] = {'S','D','4','5','H','G','R','U','8','9','K','S','A','1','2','V','4','D','5','M'};
    printf("O vetor de A antes da troca: ");
    for(i=0;i<tam;i++)
    {
        printf("%c | ", A[i]);
    }
    printf("\n");
    for(i=0;i<tam;i++)
    {
        A[i]=B[z];
        z--;
    }
    printf("O vetor de A apos da troca: ");
    for(i=0;i<tam;i++)
    {
        printf("%c | ", A[i]);
    }
    return 0;
}
