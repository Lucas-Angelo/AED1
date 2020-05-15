#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nome[250];
    int espacos=0, i, vogais=0;
    fflush(stdin);
    printf("Digite seu nome: ");
    gets(nome);
    printf("\nNome do usuario: ");
    puts(nome);
    printf("Nome invertido: ");
    int z = strlen(nome);
    for(i=0;i<=strlen(nome);i++)
    {
        printf("%c", nome[z]);
        z--;
    }
    printf("\nA quatia de caracteres e: %d", strlen(nome));
    for(i=0;i<strlen(nome);i++)
    {
        if(nome[i]==' ')
        {
            espacos++;
        }
    }
    printf("\nO numero de caracteres do nome, sem espacos e: %d", strlen(nome)-espacos);
    char nomeUpper[strlen(nome)];
    for(i=0;i<strlen(nome);i++)
    {
        if(toupper(nome[i])=='A' || toupper(nome[i])=='E' || toupper(nome[i])=='I' || toupper(nome[i])=='O' || toupper(nome[i])=='U')
        {
            vogais++;
        }
    }
    printf("\nO numero de vogais do nome e: %d", vogais);
    return 0;
}
