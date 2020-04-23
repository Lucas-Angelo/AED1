#include <stdio.h>
#include <stdlib.h>

int main()
{

    int contT=0, canal=0, pessoasC04=0, pessoasC05=0, pessoasC07=0, pessoasC12=0, tP04=0, tP05=0, tP07=0, tP12=0;
    float porc04=0, porc05=0, porc07=0, porc12=0, totalP=0;

    do
    {

        printf("\nQual canal de tevevisao esta assistindo(Digite 0 para sair)? ");
        scanf("%i", &canal);

        switch(canal)
        {
            case 4:
                printf("\nQuantas pessoas estao assistindo esse canal? ");
                scanf("%i", &pessoasC04);
                tP04 += pessoasC04;
                break;
            case 5:
                printf("\nQuantas pessoas estao assistindo esse canal? ");
                scanf("%i", &pessoasC05);
                tP05 += pessoasC05;
                break;
            case 7:
                printf("\nQuantas pessoas estao assistindo esse canal? ");
                scanf("%i", &pessoasC07);
                tP07 += pessoasC07;
                break;
            case 12:
                printf("\nQuantas pessoas estao assistindo esse canal? ");
                scanf("%i", &pessoasC12);
                tP12 += pessoasC12;
                break;
            case 0:
                printf("\nSaindo...");
                break;
            default:
                printf("\nDigite uma opcao valida!");
        }

        contT++;
    }while(canal != 0);

    totalP = tP04 + tP05 + tP07 + tP12;

    porc04 = (tP04/totalP) * 100;
    printf("\n\nO percentual de pessoas assistindo o canal 4 e de: %.2f%%", porc04);

    porc05 = (tP05/totalP) * 100;
    printf("\nO percentual de pessoas assistindo o canal 5 e de: %.2f%%", porc05);

    porc07 = (tP07/totalP) * 100;
    printf("\nO percentual de pessoas assistindo o canal 7 e de: %.2f%%", porc07);

    porc12 = (tP12/totalP) * 100;
    printf("\nO percentual de pessoas assistindo o canal 12 e de: %.2f%%", porc12);


    return 0;
}
