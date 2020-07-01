#include <iostream>

using namespace std;

class Estacionamento
{
    private:
        long int numPlaca;
        string marca;
        int entradaHora;
        int saidaHora;

    public:
        void solicitarDados ()
        {
            cout << "Digite o numero da placa: ";
            cin >> numPlaca;
            cout << "Digite a marca: ";
            cin >> marca;
            cout << "Digite a hora de entrada: ";
            cin >> entradaHora;
            cout << "Digite a hora de saida: ";
            cin >> saidaHora;
        }
        void imprimiDados ()
        {
            cout << "\nDados do carro: " << endl;
            cout << "Placa: " << numPlaca << endl;
            cout << "Marca: " << marca << endl;
            cout << "Hora de entrada: " << entradaHora << " | " << "Hora de saida: " << saidaHora << endl;
        }
        void calculare ()
        {
            cout << "\nO valor cobrado e de R$" << ((saidaHora-entradaHora)*1.0)*8.00 << endl;
        }
};

int main()
{
    Estacionamento obj1;
    obj1.solicitarDados();
    obj1.imprimiDados();
    obj1.calculare();
    return 0;
}
