#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char opcao;
    double salarioV=0, salarioN=0;

    do
    {

        printf("\nMenu de opcoes: \n");
        printf("\nA - Para aumento de 8%%");
        printf("\nB - Para aumento de 11%%");
        printf("\nC - Para aumento fixo de R$450.00");
        printf("\nD - Para sair.\n");
        printf("\nQual opcao deseja? ");
        scanf(" %c", &opcao);

        if(toupper(opcao) != 'D')
        {
        printf("Qual o salario? ");
        scanf("%lf", &salarioV);
        }

        switch(toupper(opcao))
        {
            case 'A':
                salarioN = salarioV * 1.08;
                printf("\nSalario novo e: R$%.2lf\n", salarioN);
            break;

            case 'B':
                salarioN = salarioV * 1.11;
                printf("\nSalario novo e: R$%.2lf\n", salarioN);
            break;

            case 'C':
                salarioN = salarioV + 450.00;
                printf("\nSalario novo e: R$%.2lf\n", salarioN);
            break;

            case 'D':
                printf("Saindo...\n");
            break;

            default:
                printf("\nDigite uma opcao valida!\n");

        }

    }while(toupper(opcao) != 'D');

    return 0;
}
