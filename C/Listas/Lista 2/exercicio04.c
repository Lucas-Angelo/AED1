#include <stdio.h>
#include <stdlib.h>
int main()
{
    float salarioBruto, emprestimo, max;
    printf("Qual o seu salario? ");
    scanf("%f", &salarioBruto);
    printf("Qual o valor da prestacao do emprestimo que desejar fazer? ");
    scanf("%f", &emprestimo);
    max = salarioBruto * 0.30;
    if(emprestimo <= max)
    {
    printf("O emprestimo pode ser concedido.\n\n");
    }
    else
    {
    printf("O emprestimo nao pode ser concedido. O maximo para seu salario e: %.2f\n\n", max);
    }
    return 0;
}
