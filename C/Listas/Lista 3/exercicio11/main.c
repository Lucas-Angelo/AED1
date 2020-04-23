#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num=0, i, max2=0, j;
    printf("1 ");
    for(i=0; i<20; i++)
    {
        num++;
        max2=0;
        for(j=1; j<20; j++)
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
    return 0;
}
