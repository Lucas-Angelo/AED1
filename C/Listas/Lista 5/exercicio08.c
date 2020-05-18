#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char e[250], saida[400], saida1[400];
    int i;
    printf("Digite um frase: ");
    gets(e);
    for(i=0;i<strlen(e);i++)
    {
        if(e[i]=='0')
        {
            printf("zero");
        }
        else if(e[i]=='1')
        {
            printf("um");
        }
        else if(e[i]=='2')
        {
            printf("dois");
        }
        else if(e[i]=='3')
        {
            printf("tres");
        }
        else if(e[i]=='4')
        {
            printf("quatro");
        }
        else if(e[i]=='5')
        {
            printf("cinco");
        }
        else if(e[i]=='6')
        {
            printf("seis");
        }
        else if(e[i]=='7')
        {
            printf("sete");
        }
        else if(e[i]=='8')
        {
            printf("oito");
        }
        else if(e[i]=='9')
        {
            printf("nove");
        }
        else
        {
            printf("%c", e[i]);
        }
    }
    return 0;
}
