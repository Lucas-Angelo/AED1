#include <stdio.h>
#include <stdlib.h>

int main()
{

    float nota1, nota2, mediaP;

    printf("Programa para calcular a media ponderada de duas notas, com pesos de 2 e 3!\n");

    printf("Qual a primeira nota? ");
    scanf("%f", &nota1);

    printf("Qual a segunda nota? ");
    scanf("%f", &nota2);

    mediaP = ( (nota1 * 2) + (nota2 *3) ) / 5;

    printf("A media ponderada, com pesos 2 e 3 de %.2f e %.2f = %.2f \n", nota1, nota2, mediaP);

    system("PAUSE");
    return 0;
}
