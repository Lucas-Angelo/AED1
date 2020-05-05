#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tempC, tempF;

    printf("Qual a temperatura em Celcius: ");
    scanf("%f", &tempC);

    tempF= 32 + (tempC * 9/5);

    printf("A temperatura em Fahrenheit vale: %.2f \n", tempF);


    system("PAUSE");
    return 0;
}
