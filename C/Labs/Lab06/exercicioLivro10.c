#include <stdio.h>
#include <stdlib.h>
void funcaoSequencia(int n);
int main()
{
    int n;
    printf("Programa para calcular a sequencia S!\n\n");
    printf("Digite um numero(inteiro, maior ou igual a 1): ");
    scanf("%i", &n);
    if(n>=1)
    {
        funcaoSequencia(n);
    }
    else
    {
        printf("Digite um valor valido! Maior ou igual a 1.\n");
    }
    return 0;
}
void funcaoSequencia(int n)
{
    float s, i, cont=2.0, sTotal=0;
    for(i=1;i<n;i++)
    {
        s = (1/cont);
        cont++;
        sTotal+=s;
    }
    printf("Sequencia S vale: %.2f\n", sTotal+1);
}
