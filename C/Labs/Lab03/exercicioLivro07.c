#include <stdio.h>
#include <stdlib.h>

int main()
{

    float salario, novoSalario;

    printf("Calcular reajuste de 30 porcento de salarios.\n\n");
    printf("Informe seu salario: ");
    if(scanf("%f", &salario) == 1){

        if(salario <= 500){

            novoSalario =  salario * 1.30;
            printf("Seu novo salario sera: R$%.2f\n\n", novoSalario);

        }
        else{
            printf("Infelizmente, seu salario ultrapassa 500 reais, com isso, nao tem direito de reajuste.\n\n");
        }

    }
    else{
        printf("Por favor, informe um numero real valido!\n\n");
    }

    system("PAUSE");
    return 0;
}
