#include <stdio.h>
#include <stdlib.h>

int main()
{

    float peso, engordou, emagreceu;

    printf("Programa para calcular pesos!\n");

    printf("Qual o seu peso? ");
    scanf("%f", &peso);

    engordou = peso * 1.15;
    emagreceu = peso * 0.8;

    printf("Caso voce engorde 15 porcento do seu peso: %.2f, ficara com: %.2f \n", peso, engordou);
    printf("Caso voce emagreca 20 porcento do seu peso: %.2f, ficara com: %.2f \n", peso, emagreceu);

    system("PAUSE");
    return 0;
}
