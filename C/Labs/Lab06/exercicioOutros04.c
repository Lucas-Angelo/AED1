#include <stdio.h>
#include <stdlib.h>
void funcaoVerifPrimo();
int main()
{
    funcaoVerifPrimo();
    return 0;
}
void funcaoVerifPrimo()
{
    int num=0, i, max2=0, j;
    printf("Os numeros primos de 1 a 1000 sao: ");
    for(i=0; i<=1000; i++)
    {
        num++;
        max2=0;
        for(j=1; j<=1000; j++)
        {
            if(i%j==0)
                {
                max2++;
                }
        }
        if(max2==2)
        {
            printf("%i ", i);
        }
    }
    printf("\n");
}
