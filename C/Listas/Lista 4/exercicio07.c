#include <stdio.h>
#include <stdlib.h>
void funcaoMenu();
float funcaoSoma(float num1, float num2);
float funcaoSubtracao(float num1, float num2);
float funcaoMultiplicacao(float num1, float num2);
float funcaoDivisao(float num1, float num2);
int main()
{
    printf("Programa para calcular operacoes matematicas.\n\n");
    funcaoMenu();
    return 0;
}
void funcaoMenu()
{
    int opcao=0;
    float num1=0, num2=0;
    do
    {
        printf("Menu de opcoes: ");
        printf("\n[1] - Para somar\n[2] - Para subtrair");
        printf("\n[3] - Para multiplicar\n[4] - Para dividir");
        printf("\n[0] - Para sair");
        printf("\nO que deseja fazer? ");
        scanf("%i", &opcao);
        switch (opcao)
        {
            case 1:
                printf("Digite um numero: ");
                scanf("%f", &num1);
                printf("Digite outro numero: ");
                scanf("%f", &num2);
                funcaoSoma(num1, num2);
            break;
            case 2:
                printf("Digite um numero: ");
                scanf("%f", &num1);
                printf("Digite outro numero: ");
                scanf("%f", &num2);
                funcaoSubtracao(num1, num2);
            break;
            case 3:
                printf("Digite um numero: ");
                scanf("%f", &num1);
                printf("Digite outro numero: ");
                scanf("%f", &num2);
                funcaoMultiplicacao(num1, num2);
            break;
            case 4:
                printf("Digite um numero: ");
                scanf("%f", &num1);
                printf("Digite outro numero: ");
                scanf("%f", &num2);
                if(num2!=0)
                {
                funcaoDivisao(num1, num2);
                }
                else
                {
                    printf("Digite um valor diferente de 0 para o segundo numero, na divisao.\n\n");
                }
            break;
            case 0:
                {
                    printf("Saindo...\n");
                }
            break;
            default:
                printf("Digite uma opcao valida.\n\n");
        }

    }while(opcao!=0);
}
float funcaoSoma(float num1, float num2)
{
    float res;
    res = num1 + num2;
    printf("O resultado da soma de %.2f e %.2f e %.2f\n\n", num1, num2, res);
    return res;
}
float funcaoSubtracao(float num1, float num2)
{
    float res;
    res = num1 - num2;
    printf("O resultado da subtracao de %.2f e %.2f e %.2f\n\n", num1, num2, res);
    return res;
}
float funcaoMultiplicacao(float num1, float num2)
{
    float res;
    res = num1 * num2;
    printf("O resultado da multiplicacao de %.2f e %.2f e %.2f\n\n", num1, num2, res);
    return res;
}
float funcaoDivisao(float num1, float num2)
{
    float res;
    res = num1 / num2;
    printf("O resultado da divisao de %.2f e %.2f e %.2f\n\n", num1, num2, res);
    return res;
}
