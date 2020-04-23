#include <stdio.h>
#include <stdlib.h>

int main()
{

    float lab, avali, exam, mediaP;

    printf("Programa para verificar notas.\n\n");

    printf("Qual foi sua nota no trabalho de laboratorio? ");
    scanf("%f", &lab);

    printf("Qual foi a nota da sua avalicao semestral? ");
    scanf("%f", &avali);

    printf("Qual sua nota no exame? ");
    scanf("%f", &exam);

    if((lab >= 0 && lab <= 10) && (avali >= 0 && avali <= 10) && (exam >= 0 && exam <= 10))
    {

    mediaP = ((lab*2) + (avali*3) + (exam*5))/10;

    if(mediaP >= 8 && mediaP <= 100)
    {
    printf("Parabens! Voce obteve: CONCEITO A, com media de %.2f\n\n", mediaP);
    }
    else if(mediaP >= 7 && mediaP < 8)
    {
    printf("Voce obteve: CONCEITO B, com media de %.2f\n\n", mediaP);
    }
    else if(mediaP >= 6 && mediaP < 7)
    {
    printf("Voce obteve: CONCEITO C, com media de %.2f\n\n", mediaP);
    }
    else if(mediaP >=5 && mediaP < 6)
    {
    printf("Voce obteve: CONCEITO D, com media de %.2f\n\n", mediaP);
    }
    else
    {
    printf("Voce obteve: CONCEITO E, com media de %.2f\n\n", mediaP);
    }
    }
    else
    {
        printf("Digite notas validas(Entre 0-10).\n\n");
    }
    system("PAUSE");
    return 0;
}
