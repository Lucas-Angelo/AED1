#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char frase[250], caractere;
    int i, posicao;
    printf("Digite uma frase: ");
    gets(frase);
    printf("Digite um caractere: ");
    scanf("%c", &caractere);
    for(i=0;i<strlen(frase);i++)
    {
        if(frase[i]==caractere)
        {
            posicao=i+1;
        }
    }
    printf("A posicao que o caractere '%c' aparece pela ultima vez e: %d", caractere, posicao);
    return 0;
}
