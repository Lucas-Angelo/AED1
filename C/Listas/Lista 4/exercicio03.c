#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float calculo(float x);
int main()
{
    float x, y;
    printf("Programa para calcular o valor de f(x).\n");
    printf("Qual o valor de X? ");
    scanf("%f", &x);
    y = calculo(x);
    printf("y = f(x) = %.2f", y);
    return 0;
}
float calculo(float x)
{
    float y;

    if(x <= 1)
    {
        y = 1;
    }
    else if(x > 1 && x <= 2)
    {
        y = 2;
    }
    else if(x > 2 && x <= 3)
    {
        y = pow(x,2);
    }
    else
    {
        y = pow(x,3);
    }
    return y;
}
