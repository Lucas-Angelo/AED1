#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void criarArquivo(FILE *clientes, FILE *recebimentos);  //Questao 1
int gerarCodigo(FILE *clientes);  //Questao 2 - 2.1
void cadastrarCliente(FILE *clientes); // Questao 2 - 2.2
void incluirRecebimentos(FILE *clientes, FILE *recebimentos); //Questao 3
void excluirDadosCliente(FILE *clientes, FILE *recebimentos); // Questao 4 - 4.1
void excluirDadosRecebimentos(char *codigoChar, FILE *recebimentos, int codigo); // Questao 4 - 4.2
void alterarCadastroCliente(FILE *clientes, FILE *recebimentos); //Questao 5
void alterarRecebimento(FILE *clientes, FILE *recebimentos); //Questao 6
void mostrarRecPorVenci(FILE *clientes, FILE *recebimentos); //Questao 7
void mostrarRecPorCli(FILE *clientes, FILE *recebimentos); //Questao 8

int main()
{
    int opcao;
    FILE *clientes, *recebimentos;

    while(opcao!=0)
    {
        printf(">>> Menu de opcoes <<<");
        printf("\n1 - Para criar os arquivos\n2 - Para cadastrar clientes\n3 - Para incluir recebimentos\n4 - Para excluir clientes e recebimentos");
        printf("\n5 - Para alterar cadastro de clientes\n6 - Para alterar recebimento\n7 - Para mostrar recebimentos em um periodo\n8 - Para mostrar recebimentos de um cliente\n0 - Para sair");
        printf("\nO que deseja fazer? ");
        scanf("%d", &opcao);
        switch (opcao)
        {
            case 1:
                criarArquivo(clientes, recebimentos);
                break;
            case 2:
                cadastrarCliente(clientes);
                break;
            case 3:
                incluirRecebimentos(clientes, recebimentos);
                break;
            case 4:
                excluirDadosCliente(clientes, recebimentos);
                break;
            case 5:
                alterarCadastroCliente(clientes, recebimentos);
                break;
            case 6:
                alterarRecebimento(recebimentos);
                break;
            case 7:
                //mostrarRecPorVenci(clientes, recebimentos);
                break;
            case 8:
                //mostrarRecPorCli(clientes, recebimentos);
            case 0:
                printf("Saindo...");
                break;
            default:
                printf("Informe um numero valido!");
        }
        printf("\n\n");
    }

    fclose(clientes);
    fclose(recebimentos);

    return 0;
}

void criarArquivo(FILE *clientes, FILE *recebimentos)
{
    clientes = fopen("clientes.txt", "a+");
    clientes = fopen("recebimentos.txt", "a+");
    if(clientes==NULL || recebimentos==NULL)
    {
        printf("\nErro ao criar arquivos...");
    }
    else
    {
        printf("\nArquivos criados com sucesso");
    }
}

int gerarCodigo(FILE *clientes)
{
    char ler[1000],gerar[5];
    int codigo,verificar=1;
    clientes = fopen("clientes.txt","r");
    while (fgets(ler,1000,clientes)!=NULL)
        verificar=0;
    if (verificar==1)
        codigo=1000;
    else
    {
        strcpy(gerar,ler);
        codigo = atoi(gerar)+1;
    }
    return codigo;
}

void cadastrarCliente(FILE *clientes)
{
    int codigo = gerarCodigo(clientes);
    clientes = fopen("clientes.txt", "a");
    char nome[250], endereco[250];
    printf("\nSeu codigo e: %d", codigo);
    fflush(stdin);
    printf("\nDigite o nome: ");
    gets(nome);
    fflush(stdin);
    printf("Digite o endereco: ");
    gets(endereco);
    fprintf(clientes,"%d|%s-%s*\n", codigo, nome, endereco);
    fclose(clientes);
}

void incluirRecebimentos(FILE *clientes, FILE *recebimentos)
{
    int codigo, verificar=0;
    int numDoc;
    float valorDoc;
    int emiDia, emiMes, emiAno;
    int vencDia, vencMes, vencAno;
    char codigoChar[5], ler[1000];
    clientes = fopen("clientes.txt","r");
    do
    {
        printf("Qual o codigo do cliente? ");
        scanf("%d", &codigo);
        while (fgets(codigoChar,5,clientes)!=NULL && verificar==0)
        {
            if (codigo==atoi(codigoChar))
                verificar=1;
            fgets(ler,1000,clientes);
        }
        if (verificar==0)
            printf("Informe um codigo cadastrado\n");
        fseek(clientes,0,SEEK_SET);
    }while (verificar==0);
    fclose(clientes);

    if(verificar==1)
    {
        printf("\nNumero do documento? ");
        scanf("%d", &numDoc);
        printf("\nValor do documento? ");
        scanf("%f", &valorDoc);
        printf("\nData da emissao:");
        printf("\nDia: ");
        scanf("%d", &emiDia);
        printf("Mes: ");
        scanf("%d", &emiMes);
        printf("Ano: ");
        scanf("%d", &emiAno);
        printf("\nData do vencimento: ");
        printf("\nDia: ");
        scanf("%d", &vencDia);
        printf("Mes: ");
        scanf("%d", &vencMes);
        printf("Ano: ");
        scanf("%d", &vencAno);
    }

    recebimentos = fopen("recebimentos.txt", "a");
    fprintf(recebimentos,"%d:%.2f-e%d/%d/%d-v%d/%d/%d#%d*\n", numDoc, valorDoc, emiDia, emiMes, emiAno, vencDia, vencMes, vencAno, codigo);
    fclose(recebimentos);

}

void excluirDadosCliente(FILE *clientes, FILE *recebimentos)
{
    FILE *apagar = fopen("apagar.txt", "w");
    int codigo, verificar=0;
    char codigoChar[5], ler[1000];
    int y=0;
    int i;
    int pos=0;
    clientes = fopen("clientes.txt", "r+");
    do
    {
        printf("Qual o codigo do cliente? ");
        scanf("%d", &codigo);
        while (fgets(codigoChar,5,clientes)!=NULL)
        {
            if (codigo!=atoi(codigoChar))
            {
                fseek(clientes,ftell(clientes)-4,SEEK_SET);
                fgets(ler,999,clientes);
                fputs(ler,apagar);
            }
            else
            {
                verificar=1;
                fgets(ler,999,clientes);
            }
        }
        if (verificar==0)
            printf("Informe um codigo cadastrado\n");
        fseek(clientes,0,SEEK_SET);
    }while (verificar==0);
    fclose(clientes);
    fclose(apagar);
    remove("clientes.txt");
    rename("apagar.txt", "clientes.txt");

    excluirDadosRecebimentos(codigoChar, recebimentos, codigo);

}

void excluirDadosRecebimentos(char *codigoChar, FILE *recebimentos, int codigo)
{
    FILE *apagar = fopen("apagar.txt", "w");
    int linhaatual=1;
    char ler[1000];
    int i=0;
    char ch;
    recebimentos = fopen("recebimentos.txt","r+");
    do
    {
        ch=fgetc(recebimentos);
        if(ch=='#')
        {
            fgets(codigoChar,5,recebimentos);
            if(codigo!=atoi(codigoChar))
            {
                fseek(recebimentos,0,SEEK_SET);
                for(i=1;i<linhaatual;i++)
                {
                    fgets(ler,999,recebimentos);
                }
                fgets(ler,999,recebimentos);
                fputs(ler,apagar);
            }
            linhaatual++;
        }
    }while(ch!=EOF);
    fclose(recebimentos);
    fclose(apagar);
    remove("recebimentos.txt");
    rename("apagar.txt", "recebimentos.txt");
}

void alterarCadastroCliente(FILE *clientes, FILE *recebimentos)
{
    int codigo, verificar=0;
    char codigoChar[5], ler[1000];
    int pos=0, i=0, y=0;

    clientes = fopen("clientes.txt", "r+");
    do
    {
        printf("Qual o codigo do cliente? ");
        scanf("%d", &codigo);
        while (fgets(codigoChar,5,clientes)!=NULL && verificar==0)
        {
            if (codigo==atoi(codigoChar))
            {
                verificar=1;
                pos = ftell(clientes);
                printf("%d", pos);
                fseek(clientes,pos+1,SEEK_SET);
                do
                {
                    y++;
                }while(fgetc(clientes)!='*');
                fseek(clientes,pos+1,SEEK_SET);
                for(i=0;i<y;i++)
                {
                    fputc('\0', clientes);
                }
                pos = ftell(clientes)-y;
                fseek(clientes,pos,SEEK_SET);
                char nome[250]="", endereco[250]="";
                fflush(stdin);
                printf("\nDigite o nome: ");
                gets(nome);
                fflush(stdin);
                printf("Digite o endereco: ");
                gets(endereco);
                fprintf(clientes,"%s-%s*", nome, endereco);
                fclose(clientes);
                clientes = fopen("clientes.txt", "r+");
                fseek(clientes,0,SEEK_END);
                fputc('\n', clientes);
                fclose(clientes);
            }
            fgets(ler,1000,clientes);
        }
        if (verificar==0)
            printf("Informe um codigo cadastrado\n");
        fseek(clientes,0,SEEK_SET);
    }while (verificar==0);
}

void alterarRecebimento(FILE *clientes, FILE *recebimentos)
{

}

/*void mostrarRecPorVenci(FILE *clientes, FILE *recebimentos)
{

}


void mostrarRecPorCli(FILE *clientes, FILE *recebimentos)
{

}*/

