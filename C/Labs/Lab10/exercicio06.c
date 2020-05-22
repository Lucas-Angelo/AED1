#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TamVetor 10
#define linha 10
#define coluna 3
void SelectionSortCrescente(int vetor[],int tamanho);
void SelectionSortDeCrescente(int vetor[],int tamanho);

int main()
{
    int vetor1[TamVetor], vetor2[TamVetor], vetor3[TamVetor], tamanho=TamVetor;
    int matriz[linha][coluna];
    int i, j;

    printf("Preencher vetor 1: \n");
    for(i=0;i<TamVetor;i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &vetor1[i]);
        printf("");
    }

    printf("\nPreencher vetor 2: \n");
    for(i=0;i<TamVetor;i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &vetor2[i]);
        printf("");
    }

    printf("\nPreencher vetor 3: \n");
    for(i=0;i<TamVetor;i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &vetor3[i]);
        printf("");
    }

    SelectionSortCrescente(vetor1, tamanho);
    SelectionSortDeCrescente(vetor2, tamanho);
    SelectionSortCrescente(vetor3, tamanho);

    for(j=0;j<1;j++)
    {
        for(i=0;i<linha;i++)
        {
            matriz[i][j] = vetor1[i];
        }
    }

    for(j=1;j<2;j++)
    {
        for(i=0;i<linha;i++)
        {
            matriz[i][j]=vetor2[i];
        }
    }

    for(j=2;j<3;j++)
    {
        for(i=0;i<linha;i++)
        {
            matriz[i][j]=vetor3[i];
        }
    }

    printf("\nMatriz: ");
    for(i=0;i<linha;i++)
    {
        printf("\n");
        for(j=0;j<coluna;j++)
        {
            printf("%d | ", matriz[i][j]);
        }
    }


    return 0;
}

void SelectionSortCrescente(int vetor[],int tamanho)
{
    int i, j, menor, auxiliar;
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
}

void SelectionSortDeCrescente(int vetor[],int tamanho)
{
    int i, j, z, menor, auxiliar, vetorAux[tamanho];

    for(i=0;i<tamanho;i++)
    {
        vetorAux[i]=vetor[i];
    }

    for(i=0;i<tamanho-1;i++){
        menor=i;
        for(int j=i+1 ; j<tamanho ; j++){
            if(vetorAux[menor] > vetorAux[j])
                menor=j;
        }
        if(i!=menor){
            auxiliar=vetorAux[i];
            vetorAux[i]=vetorAux[menor];
            vetorAux[menor]=auxiliar;
        }
    }

    z=tamanho;
    for(i=0;i<tamanho;i++)
    {
        z--;
        vetor[z]=vetorAux[i];
    }
}
