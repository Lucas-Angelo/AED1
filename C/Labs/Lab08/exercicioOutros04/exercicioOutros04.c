#include <stdio.h>
#include <stdlib.h>
#define tam 10
int main()
{
    int idade[tam], peso[tam], i, pes50age=0, pes70kg=0, somatorio=0,pes2030=0;
    float media=0.0;
    for(i=0; i<tam; i++)
    {
        do
        {
            printf("Digite a idade: ");
            scanf("%d", &idade[i]);
            if(idade[i]<=0)
            {
                printf("Numero invalido, digite outro numero.\n");
                i--;
            }
        }while(idade<=0);
        do
        {
            printf("Digite o peso em kg: ");
            scanf("%d", &peso[i]);
            if(peso[i]<=0)
            {
                printf("Numero invalido, digite outro numero.\n");
                i--;
            }
        }while(peso<=0);
    }
    printf("\n");
    for(i=0;i<tam;i++)
    {
        if(idade[i]>50)
        {
            pes50age++;
        }
    }
    printf("\nO total de pessoas com idade superior a 50 e: %d", pes50age);
    for(i=0;i<tam;i++)
    {
        if(peso[i]>70)
        {
            pes70kg++;
        }
    }
    printf("\nO total de pessoas com peso superior a 70kg e: %d", pes70kg);
    for(i=0;i<tam;i++)
    {
        if(idade[i]>=20 && idade[i]<=30)
        {
            somatorio+=peso[i];
            pes2030++;
        }
    }
    if(pes2030!=0)
    {
        media = (somatorio*1.0)/(pes2030*1.0);
    }
    printf("\nA media de peso e: %.2f", media);
    return 0;
}
