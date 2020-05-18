#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int funcao(char string[250], char caractere, int i);

int main()
{
    char string[250], caractere;
    printf("Digite uma frase: ");
    gets(string);
    printf("Digite um caractere: ");
    scanf("%c", &caractere);
    if(funcao(string, caractere, 0)==1)
    {
        printf("Existe o caractere %c na frase %s", caractere, string);
    }
    else
    {
        printf("Nao existe o caractere %c na frase %s", caractere, string);
    }
    return 0;
}
int funcao(char string[250], char caractere, int i)
{
    if(string[i]==caractere)
    {
        return 1;
    }
    else
    {
        if(i==strlen(string))
        {
            return 2;
        }
        return funcao(string,caractere,i+1);
    }
}
