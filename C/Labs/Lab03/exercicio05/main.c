#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float n1, n2, opcao, poten, raiz1, raiz2;

    printf("Menu de opcoes:\n1) Potenciacao\n2) Raiz quadrada\nO que deseja efetuar? \n");
    if(scanf("%f", &opcao) == 1){

            printf("Informe o primeiro numero: ");
            if(scanf("%f", &n1) == 1){
                printf("Informe o segundo numero: ");
                if(scanf("%f", &n2) == 1){

                    if(opcao == 1){

                        poten = pow(n1,n2);

                        printf("O numero %.2f elevado ao %.2f e: %.2f\n\n", n1, n2, poten);

                    }
                    else{

                        raiz1 = sqrt(n1);
                        raiz2 = sqrt(n2);

                        printf("A raiz quadrada de %.2f e: %.2f\nE a raiz quadrada de %.2f e: %.2f\n\n", n1, raiz1, n2, raiz2);

                    }
                }
                else{
                    printf("Favor, informar um numero real.");
                }
            }
            else{
                printf("Favor, informar um numero real.");
            }
        }
    else{
        printf("Erro, informe um valor valido(1 ou 2).\n\n");
    }



    system("PAUSE");
    return 0;
}
