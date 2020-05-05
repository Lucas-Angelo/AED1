#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void validacao(int idade, char sexo);
int main()
{
    int idade;
    char sexo;
    printf("Qual a sua idade? ");
    scanf("%i", &idade);
    if(idade>0)
    {
    printf("\nMenu de opcoes:\nF - Para feminino\nM - Para Masculino\nQual seu sexo? ");
    scanf(" %c", &sexo);
    if((toupper(sexo)=='F') || (toupper(sexo)=='M'))
    {
    validacao(idade, sexo);
    }
    else
    {
        printf("\nDigite uma opcao valida para sexo, F ou M.\n");
    }
    }
    else
    {
        printf("\nDigite uma idade valida, acima de 0\n");
    }
    return 0;
}
void validacao(int idade, char sexo)
{
    if((toupper(sexo)=='F') && idade < 25)
    {
        printf("ACEITA!");
    }
    else
    {
        printf("Nao aceito(a).");
    }
}
