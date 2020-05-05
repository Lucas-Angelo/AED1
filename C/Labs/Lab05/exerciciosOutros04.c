#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char sexo, corOlhos, corCabelos, cont;
    int idade=0, idadeT=0, contT=0, contF=0, contM=0, OVeCL=0;
    double altura=0, peso=0, mediaI=0, pesoT=0, mediaP=0, alturaT=0, mediaA=0, porcF=0, porcM=0;

    do
    {

        if(toupper(cont) != 'N')
        {

            //Sexo
            printf("\nMenu de opcoes: ");
            printf("\nF - Para feminino");
            printf("\nM - Para masculino");
            printf("\nQual o seu sexo? ");
            scanf(" %c", &sexo);

            if(toupper(sexo) == 'F')
            {
                contF++;
            }
            if(toupper(sexo) == 'M')
            {
                contM++;
            }

            //Olhos
            printf("\nMenu de opcoes: ");
            printf("\nA - Para olhos azuis");
            printf("\nV - Para olhos verdes");
            printf("\nC - Para olhos castanhos");
            printf("\nQual a sua opcao? ");
            scanf(" %c", &corOlhos);

            //Cabelos
            printf("\nMenu de opcoes: ");
            printf("\nL - Para cabelos louros");
            printf("\nC - Para para cabelos castanhos");
            printf("\nP - Para cabelos pretos");
            printf("\nQual a sua opcao? ");
            scanf(" %c", &corCabelos);

            if(toupper(corOlhos) == 'V' && toupper(corCabelos) == 'L')
            {
                OVeCL++;
            }

            //Idade
            printf("\nQual a sua idade? ");
            scanf("%i", &idade);

            idadeT += idade;

            //Altura
            printf("\nQual a sua altura? ");
            scanf("%lf", &altura);

            alturaT += altura;

            //Peso
            printf("\nQual seu peso? ");
            scanf("%lf", &peso);

            pesoT += peso;

        }

        printf("\nMenu de opcoes: ");
        printf("\nS - Para sim.");
        printf("\nN - Para nao");
        printf("\nVOCE DESEJA CONTINUAR? ");
        scanf(" %c", &cont);

        contT++;

    }while(toupper(cont) != 'N');

    mediaI = (idadeT*1.0)/contT;
    mediaP = pesoT/(contT*1.0);
    mediaA = alturaT/(contT*1.0);

    porcF = (contF*1.0)/(contT*1.0) * 100;
    porcM = (contM*1.0)/(contT*1.0) * 100;

    printf("\n\nA media da idade dos participantes e: %.2lf", mediaI);
    printf("\n\nA media da altura dos participantes e: %.2lf", mediaA);
    printf("\n\nA media do peso dos participantes e: %.2lf", mediaP);

    printf("\n\nA porcentagem de pessoas do sexo feminino e: %.2lf%%", porcF);
    printf("\n\nA porcentagem de pessoas do sexo masculino e: %.2lf%%", porcM);

    printf("\n\nA quantidade de pessoas louras e de olhos verdes e: %i\n\n", OVeCL);


    return 0;
}
