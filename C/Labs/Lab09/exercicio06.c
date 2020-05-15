#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nome[250], ultimoSobrenome[30],auxiliar[2];
    int i, j=0, z=0, tam=0, sobrenomes=0, IultimoNome=0, select=0;
    printf("Digite seu nome: ");
    gets(nome);
    for(i=0;i<strlen(nome);i++)
    {
        if(nome[i]==' ')
        {
            sobrenomes++;
            IultimoNome=i;
        }
    }
    for(i=0;i<strlen(nome);i++)
    {
        if(i>IultimoNome)
        {
            ultimoSobrenome[j]=nome[i];
            j++;
        }
    }
    for(i=0;i<strlen(nome);i++)
    {
        if(i==0)
        {
            auxiliar[0]=nome[i];
        }
        else if(z==0 && nome[i]==' ' && i!=IultimoNome)
        {
            select=i+1;
            auxiliar[1]=nome[select];
            z++;
        }
    }
    tam = strlen(auxiliar)+strlen(ultimoSobrenome);
    char login[tam];
    strcpy(login,auxiliar);
    if(sobrenomes==1)
    {
        strcat(login,ultimoSobrenome);
    }
    puts(strlwr(login));
    return 0;
}
