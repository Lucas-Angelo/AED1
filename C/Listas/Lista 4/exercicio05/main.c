#include <stdio.h>
#include <stdlib.h>
int funcaoSoma(int n);
int main()
{
    int n, soma;
    printf("Digite um numero natural: ");
    scanf("%i", &n);
    if(n>0)
    {
    soma = funcaoSoma(n);
    printf("A soma dos numeros entre 1 e %i e: %i\n", n, soma);
    }
    else
    {
        printf("\nDigite um numero natural valido, inteiro e positivo!\n");
    }
    return 0;
}
int funcaoSoma(int n)
{
    int i, soma=0;
    for(i=1; i<=n; i++)
    {
        soma+=i;
    }
    return soma;
}
