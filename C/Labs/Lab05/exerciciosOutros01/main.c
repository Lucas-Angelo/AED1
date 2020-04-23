#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0, i=0;
    double maior=0, menor=0, numero=0;

    printf("Quantos numeros deseja digitar? ");
    scanf("%i", &n);

    do
    {

        printf("Digite um numero: ");
        scanf("%lf", &numero);

        //Quando iniciar setar os primeiros numeros
        if(menor == 0 && maior == 0)
        {
            maior = numero;
            menor = numero;
        }

        //Se o numero novo for maior que o maior, setar novo numero maior.
        if(numero>maior)
        {
            maior = numero;
        }
        //Se o numero novo for menor que o menor, setar novo numero menor.
        if(numero<menor)
        {
            menor = numero;
        }

        i++;
    }while(i<n);

    printf("\nO maior numero e: %.2lf", maior);
    printf("\nO menor numero e: %.2lf", menor);


    return 0;
}
