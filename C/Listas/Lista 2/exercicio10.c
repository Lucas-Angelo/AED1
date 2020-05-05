#include <stdio.h>
#include <stdlib.h>
int main()
{
    int idade, opcao;
    char nome[20];
    printf("Qual o seu nome? ");
    scanf("%s", &nome);
    printf("\nQual sua idade? ");
    scanf("%d", &idade);
    printf("\nMenu de opcoes:\n1)Feminino\n2)Masculino\nQual seu sexo: ");
    scanf("%d", &opcao);
    if(opcao == 1 && idade < 25)
    {
        printf("%s ACEITA!\n\n", nome);
    }
    else
    {
        printf("%s, %d anos, NAO ACEITO(A).\n\n", nome, idade);
    }
    return 0;
}
