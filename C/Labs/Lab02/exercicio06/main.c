#include <stdio.h>
#include <stdlib.h>

int main()
{

    float salario, vendas, comissao, salarioF;

    printf("Programa para calcular a comissao(De 4 porcento) e o salario final!\n");

    printf("Qual o seu salario? ");
    scanf("%f", &salario);

    printf("Qual o valor de suas vendas? ");
    scanf("%f", &vendas);

    comissao =  vendas * 0.04;
    salarioF = salario + comissao;

    printf("A sua comissao sobre o total de vendas R$%.2f, equivale a: R$%.2f \n", vendas, comissao);
    printf("O seu salario final(Soma do seu salario: R$%.2f com sua comissao: R$%.2f), equivale a: R$%.2f \n", salario, comissao, salarioF);

    system("PAUSE");
    return 0;
}
