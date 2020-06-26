#include <iostream>
#include <stdio.h>

using namespace std;

class Cliente
{
    private:
        string nome;
        string rgCliente;
        long int cpf;
        string endereco;
        double renda;
        int idade;
    public:
        void CadastrarCliente()
        {
            cout << "Digite o nome: ";
            getline(cin >> ws, nome);
            cout << "Digite o RG: ";
            getline(cin >> ws, rgCliente);
            cout << "Digite o CPF: ";
            cin >> cpf;
            cout << "Digite a idade: ";
            cin >> idade;
            cout << "Digite o endereco: ";
            getline(cin >> ws, endereco);
            cout << "Digite a renda: ";
            cin >> renda;
        }
        void MostrarCliente()
        {
            cout << "\nCadastro cliente: ";
            cout << "Nome: " << nome;
            cout << " Endereco: " << endereco;
            cout << " RG: " << rgCliente;
            cout << " CPF: " << cpf;
            cout << " Idade: " << idade;
            cout << " Renda: " << renda;
        }
};

class Conta
{
    private:
        int numConta;
        int agencia;
        int cpf;
        double saldo;
    public:
        void CadastrarConta(int numRecebido)
        {
            numConta = numRecebido;
            agencia = 1001;
            cout << "O numero da conta sera: " << numConta << endl;
            cout << "Agencia sera: " << agencia << endl;
            cout << "Digite o CPF: ";
            cin >> cpf;
            cout << "Digite o saldo da conta: ";
            cin >> saldo;
        }
        void MostrarContas()
        {
            cout << "\nCadastro da conta: ";
            cout << "Numero da conta: " << numConta;
            cout << " Agencia: " << agencia;
            cout << " CPF: " << cpf;
            cout << " Saldo: " << saldo;
        }
        void SaqueConta(double saque)
        {
            saldo = saldo - saque;
            cout << "O seu novo saldo e: " << saldo << endl;
        }
        void DepositoConta(double deposito)
        {
            saldo = saldo + deposito;
            cout << "O seu novo saldo e: " << saldo << endl;
        }
};

int main()
{
    int opcao;
    int opcaoCliente, opcaoConta, numContaS, numContaD;
    double saqueValor, depositoValor;
    int contaSacada, contaDepositada;
    double valorTransferido;
    Cliente cli[2];
    Conta cont[2];

    printf("App do banco");

    do
    {
        cout << "\nMenu de opcoes" << endl;
        cout << "1 - Para operacoes de cliente\n2 - Para operacoes de conta\n3 - Para operacoes de transferencias\n0 - Para sair" << endl;
        cout << "Digite sua opcao: ";
        cin >> opcao;

        switch (opcao)
        {
            case 1:

                cout << "\nMenu de opcoes cliente:" << endl;
                cout << "1 - Para cadastrar cliente\n2 - Para mostrar dados de clientes cadastrados" << endl;
                cout << "Digite sua opcao: ";
                cin >> opcaoCliente;

                switch (opcaoCliente)
                {
                    case 1:
                        for(int i=0;i<2;i++)
                        {
                            cout << "\n";
                            cli[i].CadastrarCliente();
                        }
                    break;

                    case 2:
                        for(int i=0;i<2;i++)
                        {
                            cli[i].MostrarCliente();
                        }
                        cout << "\n";
                    break;

                    default:
                        cout << "Opcao invalida" << endl;
                    break;
                }
            break;

            case 2:
                cout << "\nMenu de opcoes conta:" << endl;
                cout << "1 - Para cadastrar conta\n2 - Para ver as contas\n3 - Para saque\n4 - Para deposito" << endl;
                cout << "Digite sua opcao: ";
                cin >> opcaoConta;

                switch (opcaoConta)
                {
                    case 1:
                        for(int i=0;i<2;i++)
                        {
                            cout << "\n";
                            cont[i].CadastrarConta(i);
                        }
                    break;

                    case 2:
                        for(int i=0;i<2;i++)
                        {
                            cont[i].MostrarContas();
                        }
                        cout << "\n";
                    break;

                    case 3:
                        cout << "Digite o numero da conta: ";
                        cin >> numContaS;
                        cout << "Digite o valor de saque: ";
                        cin >> saqueValor;
                        cont[numContaS].SaqueConta(saqueValor);
                    break;

                    case 4:
                        cout << "Digite o numero da conta: ";
                        cin >> numContaD;
                        cout << "Digite o valor de saque: ";
                        cin >> depositoValor;
                        cont[numContaD].SaqueConta(depositoValor);
                    break;

                    default:
                        cout << "Opcao invalida" << endl;
                    break;
                }

            break;

            case 3:
                cout << "Digite qual sera o valor transferido: ";
                cin >> valorTransferido;
                cout << "Digite o numero da conta que tera o valor sacado: ";
                cin >> contaSacada;
                cout << "Digite o numero da conta que tera o valor depositado: ";
                cin >> contaDepositada;
                cont[contaSacada].SaqueConta(valorTransferido);
                cont[contaDepositada].DepositoConta(valorTransferido);
            break;

            case 0:
                cout << "Saindo..." << endl;
            break;

            default:
                cout << "Opcao invalida" << endl;
            break;

        }

    } while (opcao!=0);

    return 0;
}
