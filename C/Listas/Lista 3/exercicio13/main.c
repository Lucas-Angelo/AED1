#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, qtde=0;
    float media, num, soma=0;
    for(i=0; i<6; i++)
    {
        printf("Digite um numero: ");
        scanf("%f", &num);
        soma = soma + num;
        if(num == 10)
        {
            qtde = qtde + 1;
        }
    }
    media = soma / 6;
    printf("\nResultado e: %.2f", media);
    printf("\nQuantidade e: %i", qtde);
    return 0;
}
