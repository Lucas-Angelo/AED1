#include <stdio.h>
#include <stdlib.h>

int main()
{

    float salarioBruto, salarioLiquido;

    printf("Qual o seu salario bruto? ");
    if(scanf("%f", &salarioBruto) == 1 && salarioBruto > 0){

        if(salarioBruto >= 0 && salarioBruto <= 350){

            salarioLiquido = (salarioBruto * 0.93) + 100;
            printf("Seu novo salario e: R$%.2f\n\n", salarioLiquido);

        }
        else if(salarioBruto > 350 && salarioBruto < 600){

            salarioLiquido = (salarioBruto * 0.93) + 75;
            printf("Seu novo salario e: R$%.2f\n\n", salarioLiquido);

        }
        else if(salarioBruto >= 600 && salarioBruto <= 900){

            salarioLiquido = (salarioBruto * 0.93) + 50;
            printf("Seu novo salario e: R$%.2f\n\n", salarioLiquido);

        }
        else{

            salarioLiquido = (salarioBruto * 0.93) + 35;
            printf("Seu novo salario e: R$%.2f\n\n", salarioLiquido);

        }

    }
    else{
        printf("Por favor, informe um numero inteiro maior que 0 valido!\n\n");
    }



    system("PAUSE");
    return 0;
}
