#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

int main()
{

    float raio, comprimento, area, volume;

    printf("Programa para calcular raio, comprimento, area, volume de um esfera!\n");

    printf("Qual o raio da esfera? ");
    scanf("%f", &raio);

    comprimento = 2 * PI * raio;
    area = 4 * PI * (pow(raio,2));
    volume = (4 * PI * (pow(raio,3)))/3;

    printf("O comprimento da esfera vale: %.2f \n", comprimento);
    printf("A area da esfera vale: %.2f \n", area);
    printf("O volume da esfera vale: %.2f \n", volume);

    system("PAUSE");
    return 0;
}
