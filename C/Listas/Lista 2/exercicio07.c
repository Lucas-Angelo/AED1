#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float num1, num2, raiz, quad;
    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite outro numero: ");
    scanf("%f", &num2);
    if(num1>num2)
    {
        if(num1>=0)
        {
            raiz = sqrt(num1);
            quad = pow(num2,2);
            printf("A raiz de %.2f = %.2f\nO quadrado de %.2f = %.2f\n\n", num1, raiz, num2, quad);
        }
        else
        {
            printf("Informe um valor maior ou igual a zero, para o seu maior numero.\n\n");
        }
    }
    else
    {
        if(num2>=0)
        {
            raiz = sqrt(num2);
            quad = pow(num1,2);
            printf("A raiz de %.2f = %.2f\nO quadrado de %.2f = %.2f\n\n", num2, raiz, num1, quad);
        }
        else
        {
            printf("Informe um valor maior ou igual a zero, para o seu maior numero.\n\n");
        }
    }
    return 0;
}
