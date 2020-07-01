#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Pessoa
{
    private:
        string nome;
        int idade;
        string endereco;
        string dataN;

    public:
        void cadastrarDados ()
        {
            cout << "Digite o nome: ";
            getline(cin >> ws, nome);
            cout << "Digite o endereco: ";
            cin >> endereco;
            cout << "Digite a data de nascimento(dd/mm/aaaa): ";
            cin >> dataN;
            idade = procurarIdade(dataN);
            mostrarDados();
        }
        int procurarIdade(string dataN)
        {
            int ano, res;

            ano = atoi(dataN.substr(6,4).c_str());

            res = 2020-ano;

            return res;
        }
        void mostrarDados()
        {
            cout << "\nNome: " << nome << endl;
            cout << "Idade em 2020: " << idade << endl;
            cout << "Endereco: " << endereco << endl;
            cout << "Data: " << dataN << endl;
        }
};

int main()
{
    Pessoa pes1;
    pes1.cadastrarDados();
    return 0;
}
