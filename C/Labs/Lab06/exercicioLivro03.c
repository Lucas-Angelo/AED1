#include <stdio.h>
#include <stdlib.h>
int funcaoRes(int num1, int num2);
int main()
{
    int num1, num2, res;
    printf("Digite um numero inteiro: ");
    scanf("%i", &num1);
    printf("Digite outro numero inteiro: ");
    scanf("%i", &num2);
    res = funcaoRes(num1, num2);
    printf("Retorno: %i\n", res);
    return 0;
}
int funcaoRes(int num1, int num2)
{
    int res, add=0, resto=1, retornar;
    if(num1%num2==0)
    {
        return 0;
    }
    else
    {
        while(resto!=0)
        {
            add++;
            resto = num1%(num2+add);
        }
        retornar = num2+add;
        return retornar;
    }
}
