#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float coefA, coefB, coefC, delta, raiz1, raiz2, raiz;

    printf("Programa para encontrar raizes de equacoes do 2o grau.\n\n");

    printf("Qual o valor do coeficiente A da equacao? ");
    scanf("%f", &coefA);

    printf("Qual o valor do coeficiente B da equacao? ");
    scanf("%f", &coefB);

    printf("Qual o valor do coeficiente C da equacao? ");
    scanf("%f", &coefC);

    delta = pow(coefB,2) - (4*coefA*coefC);

    if(delta < 0)
    {

    printf("Nao existe nenhuma raiz real para Delta negativo.\n");
    printf("Valor do seu Delta: %.2f\n\n", delta);

    }
    else if(delta == 0)
    {

    raiz = -(coefB)/(2*coefA);
    printf("Seu Delta tem valor 0, com isso, a unica raiz da sua equacao e: %.2f\n\n", raiz);

    }
    else
    {

    raiz1 = (-(coefB) + sqrt(delta))/(2*coefA);
    raiz2 = (-(coefB) - sqrt(delta))/(2*coefA);
    printf("As duas raizes da sua equacao sao: %.2f e %.2f\n\n", raiz1, raiz2);

    }

    system("PAUSE");
    return 0;
}
