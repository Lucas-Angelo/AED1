#include <stdio.h>
#include <stdlib.h>
long int funcaoMinutos(long int horas);
long int funcaoSegundos(long int horas);
long int funcaoMilissegundos(long int horas);
int main()
{
    long int horas;
    long int minutos, segundos, milissegundos;
    printf("Programa para calcular dados de horas!\n\n");
    printf("Digite uma quantia inteira de horas: ");
    scanf("%i", &horas);
    minutos = funcaoMinutos(horas);
    segundos = funcaoSegundos(horas);
    milissegundos = funcaoMilissegundos(horas);
    printf("A quantidade de minutos em %i hora(s) e: %.2li\n", horas, minutos);
    printf("A quantidade de segundos em %i hora(s) e: %.2li\n", horas, segundos);
    printf("A quantidade de milissegundos em %i hora(s) e: %.2li\n", horas, milissegundos);
    return 0;
}
long int funcaoMinutos(long int horas)
{
    long int minutos;
    minutos = horas*60;
    return minutos;
}
long int funcaoSegundos(long int horas)
{
    long int segundos;
    segundos = horas*60*60;
    return segundos;
}
long int funcaoMilissegundos(long int horas)
{
    long int milissegundos;
    milissegundos = horas*60*60*1000;
    return milissegundos;
}
