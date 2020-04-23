#include <stdio.h>
#include <stdlib.h>
int main()
{
    int idade;
    printf("Qual sua idade? ");
    scanf("%d", &idade);
    if(idade < 5)
    {
    printf("Sem categoria de natacao.\n\n");
    }
    else if(idade >=5 && idade <=7)
    {
    printf("Categoria de natacao: Infantil.\n\n");
    }
    else if(idade >= 8 && idade <= 10)
    {
    printf("Categoria de natacao: Juvenil.\n\n");
    }
    else if(idade >= 11 && idade <= 15)
    {
    printf("Categoria de natacao: Adolescente.\n\n");
    }
    else if(idade >= 16 && idade <= 30)
    {
    printf("Categoria de natacao: Adulto.\n\n");
    }
    else
    {
    printf("Categoria de natacao: Senior.\n\n");
    }
    return 0;
}
