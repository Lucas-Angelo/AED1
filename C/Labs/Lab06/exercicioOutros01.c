#include <stdio.h>
#include <stdlib.h>
char funcaoConceito(float nota);
int main()
{
    float nota;
    char nome[30], conceito;
    printf("Programa para verificar conceito.\n\n");
    printf("Qual seu nome? ");
    scanf("%s", nome);
    printf("Qual foi sua nota? ");
    scanf("%f", &nota);
    conceito = funcaoConceito(nota);
    if(nota>=0 && nota<=100)
    {
    printf("O aluno %s obteve nota %.2f e tem conceito %c.\n", nome, nota, conceito);
    }
    return 0;
}
char funcaoConceito(float nota)
{
    char conceito;
    if(nota>=90)
    {
        conceito = 'A';
    }
    else if(nota<90 && nota>=80)
    {
        conceito = 'B';
    }
    else if(nota<80 && nota>=70)
    {
        conceito = 'C';
    }
    else if(nota<70 && nota>=60)
    {
        conceito = 'D';
    }
    else if(nota<60 && nota>=0)
    {
        conceito = 'E';
    }
    else
    {
        conceito = 'z';
        printf("Nota invalida.\n");
    }
    return conceito;
}
