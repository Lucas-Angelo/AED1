#include <stdio.h>
#include <stdlib.h>

int main()
{

    float peso, engordar, emagrecer, opcao;

    printf("Qual o seu peso? \n");
    scanf("%f", &peso);

    printf("Opcoes: \n1 - Voce quer engordar 15 porcento?\n2 - Voce quer emagrecer 20 porcento?\n");
    scanf("%f", &opcao);

    if (opcao == 1)
    {
        engordar = peso * 1.15;
        printf("Se voce engordar 15 porcento ficara com %.2f", engordar);
    }
    else if(opcao == 2)
    {
        emagrecer = peso * 0.80;
        printf("Se voce emagrecer 20 porcento ficara com %.2f", emagrecer);
    }
    else
    {
        printf("Digite uma opcao valida.");
    }

    return 0;
}
