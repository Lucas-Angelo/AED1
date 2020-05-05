#include <stdio.h>
#include <stdlib.h>

int main()
{

    float pSdesconto, pCdesconto;

    printf("Programa para calcular um desconto de 10 porcento em um produto!\n");

    printf("Qual o valor do produto? ");
    scanf("%f", &pSdesconto);

    pCdesconto = pSdesconto * 0.9;

    printf("O produto de valor R$%.2f, com desconto de 10 porcento passa a valer R$%.2f \n", pSdesconto, pCdesconto);

    system("PAUSE");
    return 0;
}
