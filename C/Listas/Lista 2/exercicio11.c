#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    float salarioAtual, salarioNovo;
    char opcao;
    printf("Qual o seu salario atual? ");
    scanf("%f", &salarioAtual);
    printf("\nMenu de opcoes:");
    printf("\nA) aumento de 8% no salario");
    printf("\nB) aumento de 11% no salario");
    printf("\nC) aumento fixo no salario (de R$ 350,00 se o salario atual for ate R$ 1000 e de R$200,00 se o salario atual for maior que R$ 1000).");
    printf("\nQual sua opcao? ");
    scanf("%s", &opcao);
    switch(toupper(opcao))
    {
        case 'A':
        salarioNovo = salarioAtual + (salarioAtual*0.08);
        printf("Seu novo salario e: R$%.2f\n\n", salarioNovo);
        break;

        case 'B':
        salarioNovo = salarioAtual + (salarioAtual*0.11);
        printf("Seu novo salario e: R$%.2f\n\n", salarioNovo);
        break;

        case 'C':
        if(salarioAtual <= 1000)
        {
        salarioNovo = salarioAtual + 350.00;
        printf("Seu novo salario e: R$%.2f\n\n", salarioNovo);
        }
        else
        {
        salarioNovo = salarioAtual + 200.00;
        printf("Seu novo salario e: R$%.2f\n\n", salarioNovo);
        }
        break;

        default:
        printf("Opcao invalida!\n\n");
    }
    return 0;
}
