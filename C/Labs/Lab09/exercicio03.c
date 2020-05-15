#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char frase[250];
    int i;
    printf("Digite uma frase: ");
    gets(frase);
    for(i=0;i<strlen(frase);i++)
    {
        if(toupper(frase[i])=='A' || toupper(frase[i])=='E' || toupper(frase[i])=='I' || toupper(frase[i])=='O' || toupper(frase[i])=='U')
        {
            frase[i]='*';
        }
    }
    printf("Frase criptografada: ");
    puts(frase);
    return 0;
}
