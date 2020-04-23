#include <stdio.h>
#include <stdlib.h>

int main()
{

    float salario, conta1, conta2, salarioR;

    printf("Programa para calcular salario restante, apos pagar contas atrasadas!\n");

    printf("Qual o seu salario: ");
    scanf("%f", &salario);

    printf("Qual o valor da primeira conta? ");
    scanf("%f", &conta1);

    printf("Qual o valor da segunda conta? ");
    scanf("%f", &conta2);

    salarioR = salario - ( (conta1 * 1.02) + (conta2 * 1.02) );

    printf("O salario restante apos pagar as contas = R$%.2f \n", salarioR);


    system("PAUSE");
    return 0;
}
