#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int ano;
    printf("Qual o ano de seu nascimento? ");
    scanf("%d", &ano);
    if( ano%4==0 && ano%100 != 0 || ano%400 == 0)
    {
    printf("\nVoce nasceu em um ano bissexto.\n\n");
    }
    else
    {
    printf("\nVoce nao nasceu em um ano bissexto.\n\n");
    }
    return 0;
}
