#include <stdio.h>
#include <stdlib.h>
void verif(int numero);
int main()
{
    int num, res;
    printf("Digite um numero inteiro: ");
    scanf("%i", &num);
    verif(num);
    return 0;
}
void verif(int num)
{
    if(num > 0)
    {
        printf("O numero %i e positivo.\n", num);
    }
    else if(num == 0)
    {
        printf("O numero %i e nulo.\n", num);
    }
    else
    {
        printf("O numero %i e negativo.\n", num);
    }
}
