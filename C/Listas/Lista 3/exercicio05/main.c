#include <stdio.h>
#include <stdlib.h>
int main()
{
    int idade, mais18, i, total;
    float media;
    mais18=0;
    media=0;
    total=0;
    for(i=0; i < 20; i++)
    {
        printf("Qual a sua idade? ");
        scanf("%i", &idade);
        if(idade > 18)
        {
            mais18++;
        }
        total += idade;
    }
    media = (total/(i*1.0));
    printf("A media das idades e igual a: %.2f\n", media);
    printf("Pessoas com mais de 18 anos e: %i\n", mais18);
    return 0;
}
