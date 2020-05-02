#include <stdio.h>
#include <stdlib.h>
int funcaoMDC(int n1, int n2);
int main()
{
    int n1, n2, mdc;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    mdc = funcaoMDC(n1, n2);
    if(n1>=n2 && n2>0)
    {
        printf("O MDC de %d e %d e: %d\n", n1, n2, mdc);
    }
    else
    {
        printf("Digite numeros validos, o segundo deve ser maior que o primeiro e maior que 0.\n");
    }
    return 0;
}
int funcaoMDC(int n1, int n2)
{
    if(n2 == 0)
    {
        return n1;
    }
    else
    {
        funcaoMDC(n2, (n1 % n2));
    }
}
