#include <stdio.h>
#include <stdlib.h>
void funcaoFatorial();
int main()
{
    printf("Programa para calcular fatorial.\n\n");
    funcaoFatorial();
    return 0;
}
void funcaoFatorial()
{
    int num, i, fat=1;
    printf("Digite um numero natural: ");
    scanf("%i", &num);
    if(num>0)
    {
    for(i=1; i<=num; i++)
    {
        fat = fat * i;
    }
    printf("O fatorial de %i e: %i\n", num, fat);
    }
    else
    {
        printf("Digite um valor valido. Maior que 0.\n");
    }
}
