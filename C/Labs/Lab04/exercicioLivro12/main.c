#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int i=0, numero=0, primos=0, i2=0, verif=0;

    printf("Programa para verificar quais sao os primos.");

    for(i = 0; i <10; i++)
    {
    verif=0;
    printf("\nDigite um numero inteiro: ");
    scanf("%i", &numero);

        for(i2 = 1; i2 <= numero; i2++)
        {

        if( ( numero%i2 ) == 0)
            {
                verif++;
            }
        }
        if ( verif == 2)
        {
            primos++;
        }
    }

    printf("A quantidade de numeros primos e: %i", primos);


    return 0;
}
