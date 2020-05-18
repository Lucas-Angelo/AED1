#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char string[250], inverso[250];
    int i, j;
    fflush(stdin);
    printf("Digite uma frase: ");
    gets(string);
    j = strlen(string)-1;
    for(i=0;i<strlen(string);i++)
    {
        inverso[i]=string[j];
        j--;
    }
    if(stricmp(inverso,string)==0)
    {
        printf("\Sao palindromos.\n");
    }
    else
    {
        printf("\Nao sao palindromos.\n");
    }
    return 0;
}
