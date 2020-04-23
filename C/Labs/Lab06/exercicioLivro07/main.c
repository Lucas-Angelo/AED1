#include <stdio.h>
#include <stdlib.h>
float media();

int main()
{
    float mediaF=0;
    mediaF = media();
    printf("\n\nA media desses numeros e: %.2f\n", mediaF);
    return 0;
}

float media()
{
    float numero=0, somatorio=0, media=0;
    int cont=0;

    do
    {
        printf("Digite um numero(Para sair digite 0): ");
        scanf("%f", &numero);

        if(numero > 0)
        {
            somatorio+=numero;
            cont++;
        }
        else if(numero == 0)
        {
            printf("Saindo...");
        }
        else
        {
            printf("Digite valores positivos.");
        }

    }while(numero != 0);


    media = somatorio/(cont);

    return media;
}
