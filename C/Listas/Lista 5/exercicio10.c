#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome1[40] = "Jose", nome2[30] = "Maria", nome3[40]="Pedro";
    char nome4[30]="Henrique", nome5[30];
    int i, tam;
    strcat(nome1, nome2);
    strcpy(nome1, nome3);
    strcat(nome3, nome4);
    tam = strlen(nome2)-1;
    for(i=0;i<tam;i++)
    {
        nome5[i]=nome2[tam-i];
    }
    nome5[i]='\0';
    strupr(nome4);
    printf("\nNome1: %s", nome1); //Pedrp
    printf("\nNome4: %s", nome4);//HENRIQUE
    printf("\nNome3: %s", nome3);//PedroHenrique
    printf("\nNome5: %s", nome5);//
    return 0;
}
