#include <stdio.h>
#include <stdlib.h>

int main()
{

    char cod;
    int i;
    float trans=0, vista=0, prazo=0, total=0, parc_trip=0;

        for(i = 0; i <15; i++)
        {
            printf("\nDigite uma transacao: ");
            scanf("%f", &trans);
            printf("Menu de opcoes:\nv - Para pagar a vista\np - Para pagar a prazo\nComo quer pagar a ultima transacao? ");
            scanf("%s", &cod);

            if(cod == 'v' || cod == 'p')
            {
                if (trans >= 0)
                {

                    total += trans;

                    if(cod== 'v')
                    {
                        vista += trans;
                    }
                    else
                    {
                        prazo += trans;
                        parc_trip += trans/3;
                    }

                }
                else
                {
                    printf("DIGITE UM VALOR DE TRANSACAO VALIDO!\n");
                    i--;
                }
            }
            else
            {
                printf("DIGITE UMA OPCAO VALIDA! V ou P");
                i--;
            }
        }
    printf("\nO valor total das compras a vista e: R$%.2f", vista);
    printf("\nO valor total das compras a prazo e: R$%.2f", prazo);
    printf("\nO valor total das compras e: R$%.2f", total);
    printf("\nO valor das tres primeiras parcelas e: R$%.2f", parc_trip);

    return 0;
}
