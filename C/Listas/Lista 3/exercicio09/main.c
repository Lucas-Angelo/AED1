#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n=3, i;
    int val = 3;
    for (i=5; i>=0; i--)
    {
        if(i> 0 && i<=2)
        {
        val += n;
        }
        else if(n == 3)
        {
        n--;
        }
        else
        val = n + 1;
    }
    printf("\n%d\n", val);
    return 0;
}

