#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float x, quad, terc;
    printf("Qual o valor de x? ");
    scanf("%f", &x);
    if(x <= 1)
    {
        printf("y = f(x) = 1\n\n");
    }
    else if(x > 1 && x <= 2)
    {
        printf("y = f(x) = 2\n\n");
    }
    else if(x > 2 && x <= 3)
    {
        quad = pow(x,2);
        printf("y = f(x) = %.2f\n\n", quad);
    }
    else
    {
        terc = pow(x,3);
        printf("y = f(x) = %.2f\n\n", terc);
    }
    return 0;
}
