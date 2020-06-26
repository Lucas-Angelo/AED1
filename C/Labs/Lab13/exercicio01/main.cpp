#include <iostream>

using namespace std;

class tipo
{
    public:
        int codTipo;
        float percentual;
};

class produto
{
    private:
        string descricao;
        int tipo;
        double preco;
        float imposto;
    public:
        void calcularPrecoFinal()
        {
            cout << "Digite a descricao do produto: ";
            getline(cin >> ws, descricao);
            cout << "Digite o tipo do produto(0 ou 1): ";
            cin >> tipo;
            cout << "Digite o preco do produto: ";
            cin >> preco;
            cout << "Digite o imposto do produto: ";
            cin >> imposto;

            cout << "Descricao: " << descricao;
            cout << " Tipo: " << tipo;
            if(tipo==1)
                cout << " Preco final: " << preco+imposto*0.1;
            else if(tipo==2)
                cout << " Preco final: " << preco+imposto*0.2;
        }
};

int main()
{
    produto rodar;
    rodar.calcularPrecoFinal();
    return 0;
}
