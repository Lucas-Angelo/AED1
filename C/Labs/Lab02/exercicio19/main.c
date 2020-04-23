#include <stdio.h>
#include <stdlib.h>

int main()
{

    float base, altura, metros, potencia;

    printf("Programa para calcular potencia necessario em Watts!\n");

    printf("Quanto vale a primeira dimensao do chao do quarto? ");
    scanf("%f", &base);

    printf("Quanto vale a segunda dimensao do chao do quarto? ");
    scanf("%f", &altura);

    metros = base * altura;
    potencia = metros * 18;

    printf("A area do quarto tem %.2f metros quadrados. \n", metros);
    printf("Com isso, seram necessarios %.2f watts de potencia para iluminar o quarto. \n", potencia);

    system("PAUSE");
    return 0;
}
