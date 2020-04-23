#include <stdio.h>
#include <stdlib.h>
float pesoIdeal(float alt, int sexo);

int main()
{
    int opcao;
    float alt, pesoI;

    printf("Programa para calcular peso ideal.");

    printf("\n\nQual a sua altura? ");
    scanf("%f", &alt);

    printf("\nQual o seu sexo? ");
    printf("\n1 - Para Feminino\n2 - Para Masculino");
    printf("\nDigite o numero correspondente: ");
    scanf("%i", &opcao);
    if(opcao == 1 || opcao == 2)
    {

    pesoI = pesoIdeal(alt, opcao);

    printf("\nO seu peso ideal e: %.2f\n", pesoI);

    }
    else
    {
        printf("Digite um valor valido!");
    }

    return 0;
}

float pesoIdeal(float alt, int opcao)
{
    float pesoI;

    switch (opcao)
    {
        case 1:
            pesoI = 62.1 * alt - 44.7;
        break;
        case 2:
            pesoI = 72.7 * alt - 58;
        break;
        default:
            printf("Valor invalido.");
    }

    return pesoI;

}
