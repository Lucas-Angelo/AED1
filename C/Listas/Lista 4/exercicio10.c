#include <stdio.h>
#include <stdlib.h>
int funcaoMDC(int num1, int num2);
int main()
{
    int num1=0, num2=0, mdc=0;
    printf("Programa para calcular o M.D.C. de dois numeros!\n\n");
    printf("Digite um numero: ");
    scanf("%i", &num1);
    printf("Digite outro numero: ");
    scanf("%i", &num2);
    mdc = funcaoMDC(num1, num2);
    printf("O M.D.C. de %i e %i e: %i\n", num1, num2, mdc);
    return 0;
}
int funcaoMDC(int num1, int num2)
{
    int i, mdc=0;
    for(i=1; i<=num1 && i<=num2; i++)
    {
        if((num1%i == 0) && (num2%i == 0))
            mdc = i;
    }
    return mdc;
}
