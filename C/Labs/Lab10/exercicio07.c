#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, i, j, somatorio=0, acimaDaMedia=0;
    float media;
    printf("Quantas semanas? ");
    scanf("%d", &n);

    int matriz[n][7], minima[n];

    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<7;j++)
        {
            printf("Preencha> Semana %d | Dia %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            printf("");
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<7;j++)
        {
            somatorio+=matriz[i][j];
        }
    }

    media = (somatorio*1.0)/(n*7.0);

    for(i=0;i<n;i++)
    {
        for(j=0;j<7;j++)
        {
            if(matriz[i][j]>media)
            {
                acimaDaMedia+=1;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        minima[i]=matriz[0][0];
    }
    int z=0;

    for(i=0;i<n;i++)
    {
        for(j=0;j<7;j++)
        {
            if(matriz[i][j]<minima[i])
            {
                minima[z]=j;
                z++;
            }
        }
    }

    printf("\nRELATORIO DE PRODUCAO RELATIVO A %d SEMANAS", n);
    printf("\n------------------------------------------------");
    printf("\nA producao media foi: %.2f", media);
    printf("\nNumero de dia producao acima da media: %d", acimaDaMedia);
    printf("\n\nINDICACAO DOS DIAS DE MINIMAS PRODUCAO:\n");
    for(i=0;i<n;i++)
    {
        printf("Semana %d .......... Dia %d", i+1, minima[i]);
        printf("\n");
    }
    printf("------------------------------------------------");


    return 0;
}
