#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int funcaoVerif(float num1, float num2, float num3);
int funcaoTriang(float num1, float num2, float num3);
int main()
{
    float num1=0, num2=0, num3=0, tester=0;
    printf("Programa para verificar valores de formacao de um triangulo!\n");
    do
    {
    num1=0;
    printf("\nDigite o primeiro numero(maior que 0): ");
    scanf("%f", &num1);
    }while(num1<=0);
    do
    {
    num2=0;
    printf("\nDigite o segundo numero(maior que 0): ");
    scanf("%f", &num2);
    }while(num2<=0);
    do
    {
    num3=0;
    printf("\nDigite o terceiro numero(maior que 0): ");
    scanf("%f", &num3);
    }while(num3<=0);

    if(funcaoVerif(num1, num2, num3) == 1)
    {
        printf("Triangulo valido.");
    }
    else
    {
        printf("Triangulo invalido.");
    }

    if(funcaoVerif(num1, num2, num3) == 1)
    {
    if(funcaoTriang(num1, num2, num3) == 1)
    {
        printf(" Esse triangulo e equilatero.");
    }
    else if(funcaoTriang(num1, num2, num3) == 2)
    {
        printf(" Esse triangulo e escaleno.");
    }
    else
    {
        printf(" Esse triangulo e isosceles.");
    }
    }
    printf("\n");
    return 0;
}
int funcaoVerif(float num1, float num2, float num3)
{
    int retorno;
    if((num1 <= num2+num3) && (num2 <= num1+num3) && (num3 <= num1+num2))
    {
        retorno = 1;
    }
    else
    {
        retorno = 0;
    }
    return retorno;
}
int funcaoTriang(float num1, float num2, float num3)
{
    int retorno;
    if(num1==num2 && num1==num3 && num2==num1 && num2==num3 && num3==num1 && num3==num2)
    {
        retorno = 1;
    }
    else if(num1!=num2 && num1!=num3 && num2!=num1 && num2!=num3 && num3!=num1 && num3!=num2)
    {
        retorno = 2;
    }
    else
    {
        retorno = 3;
    }
    return retorno;
}
