#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, tAprov, tExam, tRep;
    float nota1, nota2, media, mediaT;
    i=0;
    tAprov=0;
    tExam=0;
    tRep=0;
    nota1=0;
    nota2=0;
    media=0;
    mediaT=0;
    printf("Programa para receber notas de 6 anos.\n");
    for(i=0; i<6; i++)
    {
        printf("Qual a primeira nota? ");
        scanf("%f", &nota1);
        printf("Qual a segunda nota? ");
        scanf("%f", &nota2);
        media = (nota1 + nota2) / 2.0;
        if(media <= 3)
        {
            printf("Reprovado, com media: %.2f\n\n", media);
            tRep++;
        }
        else if(media > 3 && media < 7)
        {
            printf("Em exame, com media: %.2f\n\n", media);
            tExam++;
        }
        else if(media >= 7)
        {
            printf("Aprovado, com media: %.2f\n\n", media);
            tAprov++;
        }
        mediaT += media;
    }
    printf("O total de alunos aprovados e: %i\n", tAprov);
    printf("O total de alunos reprovados e: %i\n", tRep);
    printf("O total de alunos em exame e: %i\n", tExam);
    printf("A media total da sala e: %.2f\n", mediaT/i);
    return 0;
}
