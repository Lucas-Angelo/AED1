#include <stdio.h>
#include <stdlib.h>
#define tam 10
void inverter(int vetorA[], int vetorB[], int vetorC[]);

int main()
{
    int vetorA[tam], vetorB[tam], vetorC[20], vetorAux[20], i, z=0;

    printf("Preencher vetor A: \n");
    for(i=0;i<tam;i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &vetorA[i]);
    }

    printf("\nPreencher o vetor B: \n");
    for(i=0;i<tam;i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &vetorB[i]);
    }

    for(i=0;i<10;i++)
    {
        vetorAux[i]=vetorA[i];
    }
    z=10;
    for(i=0;i<10;i++)
    {
        vetorAux[z]=vetorB[i];
        z++;
    }

    inverter(vetorA, vetorB, vetorC);

    for(i=0; i<20; i++)
    {
        printf("%d | ", vetorC[i]);
    }

    return 0;
}

void inverter(int vetorA[], int vetorB[], int vetorC[])
{
    int i, j, z=0, menor, auxiliar;
    int tamanho=20;
    int vetor[20];

    for(i=0;i<10;i++)
    {
        vetor[i]=vetorA[i];
    }
    z=20;
    for(i=0; i<20; i++)
    {
        z--;
        vetor[z]=vetorB[i];
    }

    for(i=0;i<tamanho-1;i++){
        menor=i;
        for(int j=i+1 ; j<tamanho ; j++){
            if(vetor[menor] > vetor[j])
                menor=j;
        }
        if(i!=menor){
            auxiliar=vetor[i];
            vetor[i]=vetor[menor];
            vetor[menor]=auxiliar;
        }
    }

    z=20;
    for(i=0; i<20; i++)
    {
        z--;
        vetorC[z]=vetor[i];
    }
}
