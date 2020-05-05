#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a=0;
    int m=0;
    int qtde=0;
    qtde = a;
    for(a = 0; a <=5; a++)
    {
        m = qtde + 10;

        if(a < 3)
        {
            a++;
        }
        else
        {
            m = m - 5;
        }
    }
    printf("m = %i\n", m);
    printf("a = %i\n", a);
    printf("qtde = %i\n", qtde);
    return 0;
}
