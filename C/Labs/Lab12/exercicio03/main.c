#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define tam 3


typedef struct Populacao{
    char sexo;
    int altura;
    float peso;
} Populacao;

int cadastros=0;

void lerDados();

void lerPopulacaoArquivo(Populacao vetorPopulacao[]);
void strSplit(char *strTOsplit,char *strArr[], char *strSeparet,int nArr);

float pesoMedio(Populacao vetorPopulacao[]);
int alturaMedia(Populacao vetorPopulacao[]);
char sexoMaisAlta(Populacao vetorPopulacao[]);
int altHomemMaisPesado(Populacao vetorPopulacao[]);
int altMulherMaisPesada(Populacao vetorPopulacao[]);



int main()
{
    char sexo[10];
    int opcao;
    Populacao vetorPopulacao[1000];
    lerDados();
    lerPopulacaoArquivo(vetorPopulacao);

    do
    {
        printf("\nMenu de opcoes:");
        printf("\n1 - Para peso medio\n2 - Para altura media\n3 - Para Sexo da pessoa mais alta\n4 - Para altura do homem mais pesado\n5 - Altura da mulher mais pesada\n6 - Para sair");
        printf("\nDigite sua opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                printf("\nO peso medio e: %.2fkg\n", pesoMedio(vetorPopulacao));
            break;
            case 2:
                printf("\nA altura media e: %.2fcm\n", alturaMedia(vetorPopulacao));
            break;
            case 3:
                if(sexoMaisAlta(vetorPopulacao)=='F')
                strcpy(sexo,"Feminino");
                else
                    strcpy(sexo,"Masculino");
                printf("\nSexo da pessoa mais alta e: %s\n", sexo);
            break;
            case 4:
                printf("\nAltura do homem mais pesado e: %dcm\n", altHomemMaisPesado(vetorPopulacao));
            break;
            case 5:
                printf("\nAltura da mulher mais pesada e: %dcm\n", altMulherMaisPesada(vetorPopulacao));
            break;
            case 6:
                printf("\nSaindo...\n");
            break;
            default:
                printf("\nOpcao invalida!\n");
            break;
        }

    } while (opcao!=6);


}

void lerDados()
{
    FILE *arquivo;
    arquivo = fopen("populacao.txt", "w");

    int i;
    char sexo;
    int altura;
    float peso;

    for(i=0;i<tam;i++)
    {
        if(toupper(sexo)!='X')
        {
            printf("\n>>> Pessoa %d\n", i+1);
            printf("Opcoes de sexo:\n");
            printf("F - Para feminino \nM - Para masculino");
            if(i>0)
                printf("\nX - Para finalizar");
            printf("\nDigite uma opcao: ");
            do
            {
                scanf(" %c", &sexo);
                sexo = toupper(sexo);


                if(toupper(sexo)!= 'M' && toupper(sexo)!='F' && toupper(sexo)!='X')
                {
                    printf("Opcao invalida!\n");
                    printf("Digite uma opcao valida: ");
                }

            } while (toupper(sexo)!= 'M' && toupper(sexo)!='F' && toupper(sexo)!='X');
        }

        if(toupper(sexo)!='X')
        {
            printf("\nDigite a altura(em cm): ");
            do
            {
                scanf("%i", &altura);
                if(altura<=0)
                {
                    printf("Altura invalida!\n");
                    printf("Digite um numero inteiro maior que 0: ");
                }
            } while (altura<=0);

            printf("\nDigite o peso: ");
            do
            {
                scanf("%f", &peso);
                if(peso<=0)
                {
                    printf("Peso invalido!\n");
                    printf("Digite um numero inteiro maior que 0: ");
                }
            } while (peso<=0);

            fprintf(arquivo, "\n%c;%d;%.2f", sexo, altura, peso);
        }

    }

    fclose(arquivo);


}

void strSplit(char *strTOsplit,char *strArr[], char *strSeparet,int nArr)
{
    int i = 0;
    char * pch;

    pch = strtok (strTOsplit,strSeparet);
    for(i = 0;i < nArr;i++)
    {
        //printf ("%s\n",pch);

        strArr[i] = pch;
        pch = strtok (NULL,strSeparet);
    }

}

void lerPopulacaoArquivo(Populacao vetorPopulacao[])
{
    FILE *arquivo;
    arquivo = fopen("populacao.txt", "r");
    char linha[100];
    char *result;
    char *informacoes_linha[3];
    int i=0;
    int j=0;
    while (!feof(arquivo))
    {
        result = *fgets (linha, 100, arquivo);
        if(j!=0)
        {
            strSplit(linha, informacoes_linha, ";",3);

            vetorPopulacao[i].sexo = linha[0];
            vetorPopulacao[i].altura = atoi(informacoes_linha[1]);
            vetorPopulacao[i].peso = atof(informacoes_linha[2]);

            i++;
        }
        j++;
    }
    cadastros = i;
}


float pesoMedio(Populacao vetorPopulacao[])
{
    float media, somatorio=0.0;
    int i;

    for(i=0;i<cadastros;i++)
    {
        somatorio+=vetorPopulacao[i].peso;
    }
    media = somatorio/cadastros;

    return media;
}

int alturaMedia(Populacao vetorPopulacao[])
{
    int media, somatorio=0, i;

    for(i=0;i<cadastros;i++)
    {
        somatorio+=vetorPopulacao[i].altura;
    }
    media = somatorio/cadastros;

    return media;
}

char sexoMaisAlta(Populacao vetorPopulacao[])
{
    int i;
    int maisAlto = vetorPopulacao[0].altura;
    char sexo = vetorPopulacao[0].sexo;

    for(i=0;i<cadastros;i++)
    {
        if(vetorPopulacao[i].sexo>maisAlto)
        {
            sexo = vetorPopulacao[i].sexo;
        }
    }

    return sexo;
}

int altHomemMaisPesado(Populacao vetorPopulacao[])
{
    int i, x=0;
    float maisPesado;
    int altura=0;

    for(i=0;i<cadastros;i++)
    {
        if(vetorPopulacao[i].sexo=='M' && x==0)
        {
            maisPesado = vetorPopulacao[i].peso;
            altura = vetorPopulacao[i].altura;
            x=1;
        }
    }

    for(i=0;i<cadastros;i++)
    {
        if(vetorPopulacao[i].sexo=='M')
        {
            if(vetorPopulacao[i].peso>maisPesado)
            {
                maisPesado = vetorPopulacao[i].peso;
                altura = vetorPopulacao[i].altura;
            }
        }
    }

    return altura;
}

int altMulherMaisPesada(Populacao vetorPopulacao[])
{
    int i, x=0;
    float maisPesada;
    int altura=0;

    for(i=0;i<cadastros;i++)
    {
        if(vetorPopulacao[i].sexo=='F' && x==0)
        {
            maisPesada = vetorPopulacao[i].peso;
            altura = vetorPopulacao[i].altura;
            x=1;
        }
    }

    for(i=0;i<cadastros;i++)
    {
        if(vetorPopulacao[i].sexo=='F')
        {
            if(vetorPopulacao[i].peso>maisPesada)
            {
                maisPesada = vetorPopulacao[i].peso;
                altura = vetorPopulacao[i].altura;
            }
        }
    }

    return altura;
}
