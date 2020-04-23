#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=0;
    char nome[20];
    float compras, bonus;
    for(i=0; i<150; i++)
    {
        printf("Qual o nome? ");
        scanf(" %s", nome);
        printf("Qual o valor das compras no ano passado? ");
        scanf("%f", &compras);
        if(compras > 500000)
        {
            bonus = compras * 0.15;
        }
        else
        {
            bonus = compras * 0.10;
        }
        printf("%s, o seu bonus e: R$%.2f\n\n", nome, bonus);
    }
    return 0;
}
