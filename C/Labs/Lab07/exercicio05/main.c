#include <stdio.h>
#include <stdlib.h>
int contador=1;
float funcaoSerie(int n);
int main()
{
    float n;
    printf("Digite um numero: ");
    scanf("%f", &n);
    printf("\nResultado: %.2f\n", funcaoSerie(n));
    return 0;
}
float funcaoSerie(int n)
{
    if(contador==1)
    {
        printf("1");
    }
    if(n<=0)
    {
        return 0.0;
    }
    else if(n==1)
    {
        return 1.0;
    }
    else
    {
        contador++;
        printf(" + 1/%d", contador);
        return (1.0/n)+funcaoSerie(n-1);
    }
}
