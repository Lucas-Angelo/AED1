#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
float novoSalario(float salario, float porc);
int main()
{
    char opcao;
    float salarioAtual=0, porc=0, res=0;
    printf("Programa para calcular novo salario!\n");
    do
    {
    printf("\nMenu de opcoes:");
    printf("\nA = aumento de 8%% no salario\nB = aumento de 11%% no salario\nC = aumento de 20%% no salario\nD = sair do programa");
    printf("\nQual sua opcao? ");
    scanf(" %c", &opcao);
        switch(toupper(opcao))
        {
            case 'A':
                porc = 0.08;
                printf("\nQual o seu salario atual? ");
                scanf("%f", &salarioAtual);
                if(salarioAtual>0)
                {
                    res = novoSalario(salarioAtual, porc);
                }
                else
                {
                    printf("Digite um salario valido, acima  de 0.\n");
                }
            break;
            case 'B':
                porc = 0.11;
                printf("\nQual o seu salario atual? ");
                scanf("%f", &salarioAtual);
                if(salarioAtual>0)
                {
                    res = novoSalario(salarioAtual, porc);
                }
                else
                {
                    printf("Digite um salario valido, acima  de 0.\n");
                }
            break;
            break;
            case 'C':
                porc = 0.20;
                printf("\nQual o seu salario atual? ");
                scanf("%f", &salarioAtual);
                if(salarioAtual>0)
                {
                    res = novoSalario(salarioAtual, porc);
                }
                else
                {
                    printf("Digite um salario valido, acima  de 0.\n");
                }
            break;
            break;
            case 'D':
                printf("Saindo...\n");
            break;
            default:
                printf("Digite uma opcao valida!\n");
        }
        if(toupper(opcao)!='D' && salarioAtual > 0)
        {
            printf("\nO salario novo e R$%.2f\n", res);
        }
        }while(toupper(opcao)!='D');
    return 0;
}
float novoSalario(float salarioAtual, float porc)
{
    float salarioNovo=0;
    salarioNovo = salarioAtual + (salarioAtual * porc);
    return salarioNovo;
}
