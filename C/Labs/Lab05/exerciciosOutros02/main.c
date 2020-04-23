#include <stdio.h>
#include <stdlib.h>

int main()
{

    int idade=0;
    float desconto=0, precoN=0, precoT=0;

    while(idade != -1)
    {
        printf("Qual a sua idade(Digite -1 para sair)? ");
        scanf("%i", &idade);
        if(idade >= 0 && idade<=200)
        {
            precoN = 1000 - (1000 * (((idade*1.0)/2)/100));
            printf("\nO preco novo com desconto e: R$%.2f\n\n", precoN);
            precoT += precoN;
        }
        else if(idade == -1)
        {
            printf("\nSaindo...\n\n");
        }
        else
        {
            printf("\nIdade invalida!\n\n");
        }
    }
    printf("O total de faturamento para a loja e: R$%.2f", precoT);
    return 0;
}
