#include <iostream>

using namespace std;

class Empresa
{
    private:
        string nome;
        string endereco;
        string cidade;
        string estado;
        long int cep;
        long int telefone;

    public:
        Empresa()
        {

        }
        Empresa(string nomeIns, string enderecoIns, string cidadeIns, string estadoIns, long int cepIns, long int telefoneIns)
        {
            nome = nomeIns;
            endereco = enderecoIns;
            cidade = cidadeIns;
            estado = estadoIns;
            cep = cepIns;
            telefone = telefoneIns;
        }
        void get()
        {
            cout << "Digite o nome: ";
            getline(cin >> ws, nome);
            cout << "Digite o endereco: ";
            getline(cin >> ws, endereco);
            cout << "Digite a cidade: ";
            getline(cin >> ws, cidade);
            cout << "Digite o estado: ";
            getline(cin >> ws, estado);
            cout << "Digite o cep: ";
            cin >> cep;
            cout << "Digite o telefone: ";
            cin >> telefone;
        }
        void print()
        {
            cout << "Dados da empresa: " << endl;
            cout << "Nome: " << nome << endl;
            cout << "Endereco: " << endereco << endl;
            cout << "Cidade: " << cidade << endl;
            cout << "Estado: " << estado << endl;
            cout << "CEP: " << cep << endl;
            cout << "Telefone: " << telefone << endl;
        }
};

class Restaurante : public Empresa
{
    private:
        string tipoDacomida;
        float precoMedio;

    public:
        Restaurante ()
        {

        }
        Restaurante (string tipoDacomidaIns, float precoMedioIns)
        {
            tipoDacomida = tipoDacomidaIns;
            precoMedio = precoMedioIns;
        }
        void get()
        {
            cout << "Digite o tipo da comida: ";
            getline(cin >> ws, tipoDacomida);
            cout << "Digite o preco medio: ";
            cin >> precoMedio;
        }
        void print()
        {
            cout << "\nDados do restaurante: " << endl;
            cout << "Tipo da comida: " << tipoDacomida << endl;
            cout << "Preco medio: " << precoMedio << endl;
        }
};

int main()
{
    Empresa obj1Construtor, obj;
    Empresa obj2Construtor("Burguer King", "Boulevard", "BH", "MG", 30140000, 31999999999);
    obj2Construtor.print();

    cout << "\n";

    obj.get();
    obj.print();

    Restaurante objRest;

    cout << "\n";

    objRest.get();
    objRest.print();

    return 0;
}
