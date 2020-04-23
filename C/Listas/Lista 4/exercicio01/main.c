#include <stdio.h>
#include <stdlib.h>
void verifB(int);
int main()
{
    int ano;
    printf("Programa para verificar se o ano e bissexto\n\n");
    printf("Qual o ano de seu nascimento? ");
    scanf("%i", &ano);
    verifB(ano);
    return 0;
}
void verifB(int anoTeste)
{
    if((anoTeste%4==0 && anoTeste%100!=0) || anoTeste%400==0)
    {
        printf("O ano e bissexto.\n");
    }
    else
    {
        printf("O ano nao e bissexto.\n");
    }
}
