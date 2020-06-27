#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define quantAlunos 4

typedef struct Chapas
{
    char nome[50];
    char responsavel[100];
    int votos;
} Chapas;

void cadastrarChapa(Chapas vetorChapas[]);
void receberVotos(Chapas vetorChapas[]);
void mostrarChapaVencedora(Chapas vetorChapas[]);

int main()
{
    Chapas vetorChapas[2];

    printf("Eleicao do Diretorio Academico\n");
    cadastrarChapa(vetorChapas);

    receberVotos(vetorChapas);

    mostrarChapaVencedora(vetorChapas);

    return 0;
}

void cadastrarChapa(Chapas vetorChapas[])
{
    int i=0;

    for(i=0;i<2;i++)
    {
        printf("\nCadastro Chapa: %d\n", i+1);
        printf("Digite o nome da chapa: ");
        fflush(stdin);
        gets(vetorChapas[i].nome);
        printf("Digite o nome do responsavel: ");
        fflush(stdin);
        gets(vetorChapas[i].responsavel);
        vetorChapas[i].votos=0;
    }
}

void receberVotos(Chapas vetorChapas[])
{
    int i, opcao;

    printf("\nMenu de chapas para votos:");
    printf("\n0 - Para votar na chapa %s\n1 - Para votar na chapa %s\n", vetorChapas[0].nome, vetorChapas[1].nome);
    for(i=0;i<quantAlunos;i++)
    {
        do
        {
            printf("Aluno %d. Digite o numero da chapa que deseja votar: ", i+1);
            scanf("%d", &opcao);
        } while (opcao!=0 && opcao!=1);
        vetorChapas[opcao].votos+=1;
    }
}

void mostrarChapaVencedora(Chapas vetorChapas[])
{
    int campea;
    if(vetorChapas[0].votos>vetorChapas[1].votos)
        campea = 0;
    else if(vetorChapas[0].votos==vetorChapas[1].votos)
        campea = 2;
    else
        campea = 1;

    if(campea==0 || campea==1)
    {
        printf("\nNome chapa campea: %s", vetorChapas[campea].nome);
        printf("\nNome do responsavel: %s", vetorChapas[campea].responsavel);
        printf("\nVotos: %d", vetorChapas[campea].votos);
    }
    else
    {
        printf("\nAs duas chapas empataram com %d votos.\n", vetorChapas[0].votos);
    }
}
