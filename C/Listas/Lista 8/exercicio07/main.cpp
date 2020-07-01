#include <iostream>
#include <string.h>

using namespace std;

class Restaurante
{
    private:
        string nome;
        string endereco;
        float precoMedio;
        string tipoDaComida;

    public:
        Restaurante()
        {
            nome ="nulo";
            endereco= "nulo";
            precoMedio = 0;
            tipoDaComida = "nulo";
        }
        Restaurante (string nomeInfor, string endeInfor, int precoInfor, string tipoInfor)
        {
            nome = nomeInfor;
            endereco = endeInfor;
            precoMedio = precoInfor;
            tipoDaComida = tipoInfor;
        }
        void cadastrarDados ()
        {
            cout << "Digite o nome: ";
            getline(cin >> ws, nome);
            cout << "Digite o endereco: ";
            cin >> endereco;
            cout << "Digite o preco medio: ";
            cin >> precoMedio;
            cout << "Digite o tipo da comida: ";
            cin >> tipoDaComida;
        }
        void mostrarDados()
        {
            cout << "\nNome: " << nome << endl;
            cout << "Endereco: " << endereco << endl;
            cout << "Preco medio: " << precoMedio << endl;
            cout << "Tipo da comida: " << tipoDaComida << endl;
        }
};

int main()
{
    string tipo;
    Restaurante res1, res2("PizzaLandia", "Afonso Pena", 33, "Pizza");
    //Restaurante matrizRestaurente[2][4];
    res1.cadastrarDados();
    res1.mostrarDados();
    res2.mostrarDados();

    /*for(int i=0;i<2;i++)
    {
        cout << "\nRestaurante: " << i+1 << endl;
        for(int j=0;j<4;j++)
        {

        }
    }

    cout << "\nQual tipo de comida deseja listar? ";
    cin >> tipo;*/


    return 0;
}
