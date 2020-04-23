#include <stdio.h>
#include <stdlib.h>
#include <math.h> //Para calculos com potencia

int main()
{

    float cat1, cat2, hip;

    printf("Programa para calcular a hipotenusa!\n");

    printf("Qual o valor do primeiro cateto? ");
    scanf("%f", &cat1);

    printf("Qual o valor do segundo cateto? ");
    scanf("%f", &cat2);

    hip = sqrt( pow(cat1,2) + pow(cat2,2) );

    printf("A hipotenusa tem valor de: %.2f \n", hip);

    system("PAUSE");
    return 0;
}
