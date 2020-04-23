#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, fat;
    fat=1;
    n=0;
    i=0;
    printf("Qual o numero que vc deseja calcular o fatorial? ");
    scanf("%i", &n);
    for(i=1; i<=n; i++)
    {
        fat = fat * i;
    }
    printf("O fatorial do seu numero e: %i", fat);
    return 0;
}
