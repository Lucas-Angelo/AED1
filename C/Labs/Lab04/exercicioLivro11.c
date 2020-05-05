#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, i2=0;

    int idade=0, idadePtime=0, inf18=0;
    int itime0=0, itime1=0, itime2=0, itime3=0, itime4=0;
    float mediaI0=0, mediaI1=0, mediaI2=0, mediaI3=0, mediaI4=0, mediaI5=0;

    float altura=0, alturaT=0, mediaA=0;

    float peso=0, pesoM80=0, porcM80=0;

    printf("Programa para verificar dados de idade, altura e peso de 55 jogadores divididos em 5 times.\n");

    printf("\nPRIMEIRO TIME\n");

    for(i=0; i< 5; i++)
    {
        idade = 0;
        altura = 0;
        peso = 0;

        for(i2=0; i2 < 11; i2++)
        {

            //Idades
            printf("\nQual a idade do jogador? ");
            scanf("%i", &idade);
            if(idade < 18)
                {
                    inf18++;
                }
            idadePtime += idade;
            if(i == 0)
                {
                    itime0 += idade;
                }
            if(i == 1)
                {
                    itime1 += idade;
                }
            if(i == 2)
                {
                    itime2 += idade;
                }
            if(i == 3)
                {
                    itime3 += idade;
                }
            if(i == 4)
                {
                    itime4 += idade;
                }
            //Fim Idades

            //Alturas
            printf("Qual a altura do jogador? ");
            scanf("%f", &altura);
            alturaT += altura;
            //Fim Altura

            //Peso
            printf("Qual o peso do jogador? ");
            scanf("%f", &peso);
            if(peso > 80)
                {
                    pesoM80++;
                }
            //Fim Peso

            printf("");//Quebra linha
        }
            printf("\nNOVO TIME\n");
    }

    //Idades
    printf("\n\nDADOS SOBRE IDADES: ");
    printf("\nA quantidade de jogadores com idade inferior a 18 anos e: %i\n", inf18);
    mediaI0 = itime0 / i2;
    mediaI1 = itime1 / i2;
    mediaI2 = itime2 / i2;
    mediaI3 = itime3 / i2;
    mediaI4 = itime4 / i2;
    printf("A media de idade dos jogadores de cada time e: %.2f %.2f %.2f %.2f %.2f", mediaI0, mediaI1, mediaI2, mediaI3, mediaI4);
    //Fim Idades

    //Altura
    printf("\n\nDADOS SOBRE ALTURAS: ");
    mediaA = alturaT / (i*i2);
    printf("\nA altura media de todos os jogadores do campeonato e: %.2f", mediaA);
    //Fim Altura

    printf("\n\nDADOS SOBRE PESOS: ");
    //Peso
    porcM80 = (pesoM80/(i*i2))*100;
    printf("\nA porcentagem de jogadores acima de 80Kg no campeonato e: %.2f\n", porcM80);
    //Fim Peso


    return 0;
}
