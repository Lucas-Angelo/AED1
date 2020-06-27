#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

typedef struct Pacientes
{
    unsigned int codigo;
    char nome[50];
    char endereco[200];
    char telefone[100];
} Pacientes;

void cadastrarCliente(Pacientes paciente);

int main()
{
    Pacientes paciente;
    cadastrarCliente(paciente);
    printf("\nCliente cadastrado!");
    return 0;
}

void cadastrarCliente(Pacientes paciente)
{
    FILE *arquivo;
    arquivo = fopen("cliente.txt", "w");

    srand((unsigned int)time(NULL));
    paciente.codigo = rand();

    printf("Digite o nome do paciente: ");
    fflush(stdin);
    gets(paciente.nome);

    printf("Digite o nome do endereco: ");
    fflush(stdin);
    gets(paciente.endereco);

    int verificador=0, x, i;
    printf("Digite o telefone: ");
    do
    {
        fflush(stdin);
        gets(paciente.telefone);
        for(i=0; i<strlen(paciente.telefone); i++)
        {
            x=isdigit(paciente.telefone[i])?1:2;
            if(x==1)
            {
                verificador++;
            }
        }
        if(verificador<10)
        {
            printf("Numero de telefone invalido! Minimo de 10 numeros (DDD + numero)\n");
            printf("Digite um telefone valido: ");
        }
    } while (verificador<10);

    fprintf(arquivo, "%d;%s;%s;%s", paciente.codigo, paciente.nome, paciente.endereco, paciente.telefone);

}
