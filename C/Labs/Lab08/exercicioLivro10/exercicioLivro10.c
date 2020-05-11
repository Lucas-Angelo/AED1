#include <stdio.h>
#include <stdlib.h>
#define tam1 10
#define tam2 5
int main()
{
    int vetor1[tam1] = {4,7,5,8,2,15,9,6,10,11};
    int vetor2[tam2] = {3,4,5,8,2};

    //Vetor Resultante 1
    int i, j, totalPares=0, somatorio=0;
    for(i=0;i<tam1;i++)
    {
        if(vetor1[i]%2==0)
        {
            totalPares++;
        }
    }
    for(i=0;i<tam2;i++)
    {
        somatorio+=vetor2[i];
    }
    int vetorR1[totalPares];
    int cont = 0;
    for(i=0;i<tam1;i++)
    {
        if(vetor1[i]%2==0)
        {
            vetorR1[cont]=vetor1[i];
            cont++;
        }
    }
    printf("Vetor Resultante 1: ");
    for(i=0;i<totalPares;i++)
    {
        vetorR1[i]= vetorR1[i] + somatorio;
        printf("%d | ", vetorR1[i]);
    }
    printf("\n");

    //Vetor Resultante 2
    int totalImpares=0;
    for(i=0;i<tam1;i++)
    {
        if(vetor2[i]%2!=0)
        {
            totalImpares++;
        }
    }
    int vetorR2[totalImpares];
    cont = 0;
    int z=0;
    for(i=0;i<tam1;i++)
    {
        if(vetor1[i]%2!=0)
        {
            for(j=0;j<tam2;j++)
            {
                if(vetor1[i]%vetor2[j]==0)
                {
                    cont++;
                }
            }
            vetorR2[z] = cont;
            z++;
        }
        cont=0;
    }
    printf("\nVetor resultante 2: ");
    for(i=0;i<tam2;i++)
    {
        printf("%d | ", vetorR2[i]);
    }
    printf("\n");
    return 0;
}
