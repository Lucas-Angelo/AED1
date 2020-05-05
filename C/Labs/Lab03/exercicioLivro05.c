#include <stdio.h>
#include <stdlib.h>

int main()
{

    float n1, n2, n3, opcao, media, subt, mult, divis;

    printf("Digite um numero: ");
    if(scanf("%f", &n1) == 1){
        printf("Digite outro numero: ");
        if(scanf("%f", &n2) == 1){
            printf("Digite mais um numero: ");
            if(scanf("%f", &n3) == 1){

                printf("Menu de opcoes: \n1) Media entre os numeros digitados \n2) Diferença do maior pelo menor \n3) Produto entre os numeros digitados \n4) Divisao do primeiro pelo segundo \nPor favor, selecione uma opcao: ");
                if(scanf("%f", &opcao) == 1 || opcao == 1 || opcao == 2 || opcao == 3 || opcao == 4){

                    if(opcao == 1){

                        media = (n1 + n2 + n3)/3;
                        printf("A media entre %.2f, %.2f e %.2f = %.2f\n\n", n1, n2, n3, media);

                    }
                    else if(opcao == 2){
                        if(n1 > n2 && n1 > n3 && n2 < n3){

                            subt = n1 - n2;

                        }
                        else if(n1 > n2 && n1 > n3 && n3 < n2){

                            subt = n1 - n3;

                        }
                        else if(n2 > n1 && n2 > n3 && n1 < n3){

                            subt = n2 - n1;

                        }
                        else if(n2 > n1 && n2 > n3 && n3 < n1){

                            subt = n2 - n3;

                        }
                        else if(n3 > n1 && n3 > n2 && n1 < n2){

                            subt = n3 - n1;

                        }
                        else{

                            subt = n3 - n2;

                        }

                        printf("A diferença do maior numero pelo menor e: %.2f\n\n", subt);

                    }
                    else if(opcao == 3){

                        mult = n1 * n2 * n3;
                        printf("O produto entre %.2f, %.2f e %.2f e: %.2f\n\n", n1, n2, n3, mult);

                    }
                    else{

                        divis = n1/n3;
                        printf("A divisao do %.2f pelo %.2f e: %.2f\n\n", n1, n3, divis);

                    }

                }
                else{
                    printf("Por favor, digite um numero inteiro valido(De 1 a 4)!");
                }
            }
            else{
                printf("Por favor, digite um numero real VALIDO!");
            }
        }
        else{
            printf("Por favor, digite um numero real VALIDO!");
        }
    }
    else{
        printf("Por favor, digite um numero real VALIDO!");
    }



    system("PAUSE");
    return 0;
}
