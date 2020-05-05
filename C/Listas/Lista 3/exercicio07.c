#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    float S, fS;
    S = 1;
    fS = 0;
    printf("Qual o valor de n? ");
    scanf("%i", &n);
    for(i=1; i<=n; i++)
    {
        S = 1/(i*1.0);
        printf("%f ", S);
        fS += S;
    }
    printf("\nValor final do S e: %f", fS);
    return 0;
}
