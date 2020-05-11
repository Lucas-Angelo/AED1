#include <stdio.h>
#include <stdlib.h>
#define tam 10
void SelectionSort(int vetor[],int tamanho);
int main()
{
    int i, vetor[tam];
    printf("Digite os valores do seu vetor\n");
    for(i=0; i<tam; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }
    SelectionSort(vetor, tam);
    for(i=0; i<tam; i++)
    {
        printf("%d | ", vetor[i]);
    }
    return 0;
}
void SelectionSort(int vetor[],int tamanho)
{
    int i, j, menor, auxiliar;
    for(i=0;i<tam-1;i++){
        menor=i;
        for(int j=i+1 ; j<tam ; j++){
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
