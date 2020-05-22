#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 4

int main()
{
    int matriz[tam][tam], matrizResultante[tam][tam];
    int numero, i, j;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    printf("\n");

    for(i=0;i<tam;i++)
    {
        for(j=0;j<tam;j++)
        {
            printf("Digite o numero %d | %d da matriz: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            printf("");
        }
    }

    printf("\n");

    for(i=0;i<tam;i++)
    {
        for(j=0;j<tam;j++)
        {
            matrizResultante[i][j]=matriz[i][j]*numero;
        }
    }

    printf("Matriz Resultante: ");
    for(i=0;i<tam;i++)
    {
        printf("\n");
        for(j=0;j<tam;j++)
        {
            printf("%d | ", matrizResultante[i][j]);
        }
    }


    /*printf("Matriz Resultante: ");
    for(i=0;i<tam;i++)
    {
        printf("\n");
        for(j=0;j<tam;j++)
        {
            printf("%d | ", (numero*matriz[i][j]));
        }
    }*/


    return 0;
}
