#include <stdio.h>
#include <stdlib.h>
#define tam 30
int main()
{
    int vetorPeso[tam], i, peso70=0, somatorio=0, maisGordo=0, maisMagro=0;
    float media=0.0;
    for(i=0;i<tam;i++)
    {
        printf("Digite um peso: ");
        scanf("%d", &vetorPeso[i]);
        printf("");
    }
    maisMagro=vetorPeso[0];
    maisGordo=vetorPeso[0];
    for(i=0;i<tam;i++)
    {
        somatorio+=vetorPeso[i];
        if(vetorPeso[i]>70)
        {
            peso70++;
        }
        if(vetorPeso[i]>maisGordo)
        {
            maisGordo=vetorPeso[i];
        }
        if(vetorPeso[i]<maisMagro)
        {
            maisMagro=vetorPeso[i];
        }
    }
    printf("\nTotal de alunos com peso maior que 70kg: %d", peso70);
    media = ((somatorio*1.0)/tam);
    printf("\nA media de pesos e: %.2f", media);
    printf("\nO aluno mais gordo pesa: %d", maisGordo);
    printf("\nO aluno mais magro pesa: %d", maisMagro);
    return 0;
}
