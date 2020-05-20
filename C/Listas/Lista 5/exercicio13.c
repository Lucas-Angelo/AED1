#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int tempMedia[12], i;

    for(i=0;i<12;i++)
    {
        printf("Mes %d, temperatura media? ", i+1);
        scanf("%d", &tempMedia[i]);
        printf("");
    }

    calculo(tempMedia);

    return 0;
}

void calculo(int tempMedia[12])
{
    int i, menorT, mesMenorT, maiorT, mesMaiorT;
    char mesMaior[30];
    char mesMenor[30];

    menorT=tempMedia[0];
    mesMenorT=0;

    maiorT=tempMedia[0];
    mesMaiorT=0;

    for(i=0;i<12;i++)
    {

        if(tempMedia[i]<=menorT)
        {
            menorT=tempMedia[i];
            mesMenorT=i;
        }

        if(tempMedia[i]>=maiorT)
        {
            maiorT=tempMedia[i];
            mesMaiorT=i;
        }

    }

    if(mesMaiorT==0)
    {
        strcpy(mesMaior,"janeiro");
    }
    else if(mesMaiorT==1)
    {
        strcpy(mesMaior,"fevereiro");
    }
    else if(mesMaiorT==2)
    {
        strcpy(mesMaior,"marco");
    }
    else if(mesMaiorT==3)
    {
        strcpy(mesMaior,"abril");
    }
    else if(mesMaiorT==4)
    {
        strcpy(mesMaior,"maio");
    }
    else if(mesMaiorT==5)
    {
        strcpy(mesMaior,"junho");
    }
    else if(mesMaiorT==6)
    {
        strcpy(mesMaior,"julho");
    }
    else if(mesMaiorT==7)
    {
        strcpy(mesMaior,"agosto");
    }
    else if(mesMaiorT==8)
    {
        strcpy(mesMaior,"setembro");
    }
    else if(mesMaiorT==9)
    {
        strcpy(mesMaior,"outubro");
    }
    else if(mesMaiorT==10)
    {
        strcpy(mesMaior,"novembro");
    }
    else if(mesMaiorT==11)
    {
        strcpy(mesMaior,"dezembro");
    }

    if(mesMenorT==0)
    {
        strcpy(mesMenor,"janeiro");
    }
    else if(mesMenorT==1)
    {
        strcpy(mesMenor,"fevereiro");
    }
    else if(mesMenorT==2)
    {
        strcpy(mesMenor,"marco");
    }
    else if(mesMenorT==3)
    {
        strcpy(mesMenor,"abril");
    }
    else if(mesMenorT==4)
    {
        strcpy(mesMenor,"maio");
    }
    else if(mesMenorT==5)
    {
        strcpy(mesMenor,"junho");
    }
    else if(mesMenorT==6)
    {
        strcpy(mesMenor,"julho");
    }
    else if(mesMenorT==7)
    {
        strcpy(mesMenor,"agosto");
    }
    else if(mesMenorT==8)
    {
        strcpy(mesMenor,"setembro");
    }
    else if(mesMenorT==9)
    {
        strcpy(mesMenor,"outubro");
    }
    else if(mesMenorT==10)
    {
        strcpy(mesMenor,"novembro");
    }
    else if(mesMenorT==11)
    {
        strcpy(mesMenor,"dezembro");
    }



    printf("\nA maior temp media foi %d em %s", maiorT, mesMaior);
    printf("\nA menor temp media foi %d em %s", menorT, mesMenor);

}
