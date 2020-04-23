#include <stdio.h>
#include <stdlib.h>

int main()
{

    int opcao=0, meses=0;
    float salarioV=0, salarioN=0, salario=0, salarioTf=0, salarioTdt=0, salarioPdt=0;

    do
    {

        printf("\nMenu de opcoes: ");
        printf("\n1 - Para novo salario");
        printf("\n2 - Para ferias");
        printf("\n3 - Para decimo salario");
        printf("\n4 - Para sair");
        printf("\nDigite a opcao desejada: ");
        scanf("%i", &opcao);

        switch(opcao)
        {
            case 1:
                printf("\nQual o seu salario atual? ");
                scanf("%f", &salarioV);

                if(salarioV > 0 && salarioV <= 210)
                {
                    salarioN = salarioV * 1.15;
                    printf("Seu novo salario e: R$%.2f\n\n", salarioN);
                }
                else if(salarioV > 210 && salarioV <= 600)
                {
                    salarioN = salarioV * 1.10;
                    printf("Seu novo salario e: R$%.2f\n\n", salarioN);
                }
                else if(salarioV > 600)
                {
                    salarioN = salarioV * 1.05;
                    printf("Seu novo salario e: R$%.2f\n\n", salarioN);
                }
                else
                {
                    printf("\nDigite um salario valido\n\n");
                }

                break;
            case 2:
                printf("\nQual o seu salario? ");
                scanf("%f", &salario);

                salarioTf = salario +(salario/3);
                printf("O valor de suas ferias e: R$%.2f\n\n", salarioTf);

                break;
            case 3:
                printf("Qual seu salario? ");
                scanf("%f", &salarioTdt);

                printf("Possui quantos meses de trabalho? ");
                scanf("%i", &meses);

                if(meses > 0 && meses <= 12)
                {
                    salarioPdt = (salarioTdt*(meses*1.0))/12;
                    printf("O seu decimo terceiro e: R$%.2f\n\n", salarioPdt);
                }
                else
                {
                    printf("Digite um valor valido para meses, maior que 0 e menor que 12");
                }
                break;
            case 4:
                printf("\nSaindo...");
                break;

            default:
                printf("\nDigite uma opacao valida!");
        }


    }while(opcao != 4);



    return 0;
}
