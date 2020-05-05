#include <stdio.h>
#include <stdlib.h>
int main()
{
    int idade;
    printf("Qual a sua idade? ");
    scanf("%d", &idade);
    if(idade < 16)
    {
        printf("Nao eleitor.\n");
    }
    else if(idade >= 18 && idade < 65)
    {
        printf("Eleitor obrigatorio.\n");
    }
    else
    {
        printf("Eleitor facultativo.\n");
    }
    return 0;
}
