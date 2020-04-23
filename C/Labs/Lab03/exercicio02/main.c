#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n1, n2, n3, p1, p2, p3;

    printf("Programa ordenador numerico!\n");

    printf("\nDigite o primeiro numero: \n");
    scanf("%d", &n1);
    printf("\nDigite o segundo numero: \n");
    scanf("%d", &n2);
    printf("\nDigite o terceiro numero: \n");
    scanf("%d", &n3);

    if(n1 == n2 || n1 == n3 || n2 == n3 || n3 == n2) //Verificar se os numeros nao sao iguais
    {
        printf("Por favor, informe valores nao iguais.\n");
    }
    else
    {

    //incio, achando posicao do numero 1
    if (n1 > n2 && n1 > n3)
    {
        p1 = n1;
    }
    else if(n1 < n2 && n1 > n3)
    {
        p2 = n1;
    }
    else if(n1 < n3 && n1 > n2)
    {
        p2 = n1;
    }
    else
    {
        p3 = n1;
    }
    //fim numero 1

    //incio, achando posicao do numero 2
    if(n2 > n1 && n2 > n3)
    {
        p1 = n2;
    }
    else if(n2 < n1 && n2 > n3)
    {
        p2 = n2;
    }
    else if(n2 < n3 && n2 > n1)
    {
        p2 = n2;
    }
    else{
        p3 = n2;
    }
    //fim numero 2


    //inicio, achando posicao do numero 3
    if(n3 > n1 && n3 > n2)
    {
        p1 = n3;
    }
    else if(n3 < n1 && n3 > n2)
    {
        p2 = n3;
    }
    else if(n3 < n2 && n3 > n1)
    {
        p2 = n3;
    }
    else{
        p3 = n3;
    }
    //fim numero 3

    printf("\nOrdem decrescente: %d, %d, %d\n", p1, p2, p3, p3, p2, p1);
    }



    system("PAUSE");
    return 0;
}
