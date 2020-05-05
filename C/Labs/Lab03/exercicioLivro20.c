#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float salarioBruto, emprestimo, max;

    printf("Qual o seu salario? ");
    if(scanf("%f", &salarioBruto) == 1 && salarioBruto > 0){

        printf("Qual o valor do emprestimo que desejar fazer? ");
        if(scanf("%f", &emprestimo) == 1 && emprestimo > 0){

            max = salarioBruto * 0.30;

            if(emprestimo <= max){

                printf("O emprestimo pode ser concedido.\n\n");

            }
            else{
                printf("O emprestimo nao pode ser concedido. O maximo para seu salario e: %.2f\n\n", max);
            }


        }
        else{
            printf("Informe um numero real valido, maior que 0.\n\n");
        }

    }
    else{
        printf("Informe um numero real valido, maior que 0.\n\n");
    }





    system("PAUSE");
    return 0;
}
