#include <stdio.h>
#include <stdlib.h>
int somatorio(int n);
int main()
{
    int n;
    do{
    printf("Digite um numero natural: ");
    scanf("%d", &n);
    if(n<0)
    {
        printf("Digite um valor inteiro maior que 0!\n");
    }
    }while(n<0);
    printf("Somatorio e: %d", somatorio(n));
    return 0;
}
int somatorio(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n+somatorio(n-1);
    }
}
