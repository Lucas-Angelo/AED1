#include <stdio.h>
#include <stdlib.h>
int cont = 0;
void trocarDiscos(int discos, char origem, char destino, char auxiliar);
int main()
{
    int discos;
    printf("Quantos discos deseja? ");
    scanf("%d", &discos);
    printf("Os movimentos necessarios sao: \n\n");
    trocarDiscos(discos, 'A', 'C', 'B');
    return 0;
}
void trocarDiscos(int discos, char origem, char destino, char auxiliar)
{
    if(discos==1)
    {
        cont++;
        printf("%do - Mover disco %d", cont, discos);
        printf(" de %c", origem);
        printf(" para %c.\n", destino);
    }
    else
    {
        trocarDiscos(discos-1,origem,auxiliar,destino);
        cont++;
        printf("%do - Mover disco %d", cont, discos);
        printf(" de %c", origem);
        printf(" para %c.\n", destino);
        trocarDiscos(discos-1,auxiliar,destino,origem);
    }
}
