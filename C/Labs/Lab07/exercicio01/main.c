// COM REPETIÇÃO
/*#include <stdio.h>
#include <stdlib.h>
int Multiplica(int n1, int n2);
int main()
{
    int n1, n2;
    printf("Digite o valor de n1: ");
    scanf("%d", &n1);
    printf("Digite o valor de n2: ");
    scanf("%d", &n2);
    printf("Resultado: %d", Multiplica(n1, n2));
    return 0;
}
int Multiplica(int n1, int n2)
{
    int i, soma;
    for(i=n2; i>0; i--)
    {
        soma+=n1;
    }
    return soma;
}*/

//COM RECURSIVIDADE
#include <stdio.h>
#include <stdlib.h>
int Multiplica(int n1, int n2);
int main()
{
    int n1, n2;
    printf("Digite o valor de n1: ");
    scanf("%d", &n1);
    printf("Digite o valor de n2: ");
    scanf("%d", &n2);
    printf("Resultado: %d", Multiplica(n1, n2));
    return 0;
}
int Multiplica(int n1, int n2)
{
    if(n2==0)
    {
        return 0;
    }
    else
    {
        return n1+Multiplica(n1,n2-1);
    }
}

//RECURSIVIDADE OUTRA FORMA
/*#include <stdio.h>
#include <stdlib.h>
int mult_recursiva (int a, int b, int soma){
    if(b < 0){
        b*=-1;
        a*=-1;
    }
    if (soma == 0){
        soma = a;
    }
    if(b == 1){
        return soma;
    }else if (b == 0){
        return b;
    }else if (b > 1){
        soma+=a;
        mult_recursiva(a,b-1,soma);
    }
}

int main(){
    int a = 0;
    int b = 0;
    printf("Digite o termo A: ");
    scanf("%d", &a);
    printf("Digite o termo b: ");
    scanf("%d", &b);
    printf("Resutado = %d", mult_recursiva(a,b,0));
    return 0;
}*/
