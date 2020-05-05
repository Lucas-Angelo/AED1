#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, h;
    i = 0;
    n = 0;
    h = 0;
    printf("Qual o valor de n? ");
    scanf("%i", &n);
    for(i= 0; i < n; i++)
    {
        h = h + 10;
    }
    printf("H = %i", h);
    return 0;
}
