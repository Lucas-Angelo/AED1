#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int i=0, numero=0, pares=0, primos=0, i2=0, verif=0;

    printf("Programa para somar pares e somar primos.");

    for(i = 0; i <10; i++)
    {
    verif=0;
    printf("\nDigite um numero natural: ");
    scanf("%i", &numero);

    if(numero > 0)
    {
        for(i2 = 1; i2 <= numero; i2++)
        {

        if( ( numero%i2 ) == 0)
            {
                verif++;
            }
        }
        if ( verif == 2)
        {
            primos += numero;
        }
        if ( numero%2 == 0)
        {
            pares += numero;
        }
    }
    else
    {
        printf("Os numeros negativos e nulos nao sao naturais.");
        --i;
    }
    }

    printf("\n\nA soma dos numeros pares = %i\n", pares);
    printf("A soma dos numeros primos = %i\n", primos);


    return 0;
}
