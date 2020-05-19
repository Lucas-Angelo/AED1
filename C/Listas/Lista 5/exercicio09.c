#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char frase[250];
    int i, tamFrase=0, select=0, primeiroEspaco=0, ultimoEspaco=0, cal=0;

    printf("Frase: ");
    gets(frase);

    tamFrase = strlen(frase);

    select=0;
    for(i=0;i<tamFrase;i++)
    {
        if(frase[i]==' ' && select==0)
        {
            primeiroEspaco=i;
            select=1;
        }
    }

    for(i=0;i<tamFrase;i++)
    {
        if(frase[i]==' ')
        {
            ultimoEspaco=i;
        }
    }

    printf("Saida:");
    cal = tamFrase-ultimoEspaco;
    for(i=ultimoEspaco;i<tamFrase;i++) //Ultima palavra
    {
        printf("%c", frase[i]);
    }

    for(i=primeiroEspaco;i<ultimoEspaco;i++)
    {
        printf("%c", frase[i]);
    }

    printf(" ");
    for(i=0;i<primeiroEspaco;i++) //Primeira Palavra
    {
        printf("%c", frase[i]);
    }


    return 0;
}
