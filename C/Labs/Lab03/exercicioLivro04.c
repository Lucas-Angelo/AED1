#include <stdio.h>
#include <stdlib.h>

int main()
{

    float n1, n2, n3;

    printf("Informe o primeiro numero: ");
    if(scanf("%f", &n1) == 1){
        printf("Informe o segundo numero: ");
        if(scanf("%f", &n2) == 1){
            printf("Informe o terceiro numero: ");
            if(scanf("%f", &n3) == 1){

                if(n1 > n2 && n1 > n3){
                    printf("O maior numero e: %.2f\n\n", n1);
                }
                else if(n2 > n1 && n2 > n3){
                    printf("O maior numero e: %.2f\n\n", n2);
                }
                else{
                    printf("O maior numero e: %.2f\n\n", n3);
                }

            }
            else{
                printf("Informe um numero real valido!");
            }
        }
        else{
            printf("Informe um numero real valido!");
        }
    }
    else{
        printf("Informe um numero real valido!");
    }



    system("PAUSE");
    return 0;
}
