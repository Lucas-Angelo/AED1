#include <stdio.h>
#include <stdlib.h>
int divisaoInt(int n1, int n2);
int main()
{
    int n1, n2;
    do{
    printf("Digite o primeiro numero natural: ");
    scanf("%d", &n1);
    if(n1<=0)
    {
        printf("Digite um valor inteiro maior que 0!\n");
    }
    }while(n1<=0);
    do{
    printf("Digite o segundo numero natural: ");
    scanf("%d", &n2);
    if(n2<=0)
    {
        printf("Digite um valor inteiro maior que 0!\n");
    }
    }while(n2<=0);
    printf("Resultado da divisao inteira: %d", divisaoInt(n1,n2));
    return 0;
}
int divisaoInt(int n1, int n2)
{
    if(n2==0)
    {
        return 0;
    }
    else if(n1-n2<0)
    {
        return 0;
    }
    else if(n1<n2)
    {
        return 0;
    }
    else
    {
        return 1+divisaoInt(n1-n2, n2);
    }
}
