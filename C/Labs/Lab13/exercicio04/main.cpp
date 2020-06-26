#include <iostream>

using namespace std;

class Carro
{
    private:
        string placa;
        int ano;
    public:
        void calcularImposto()
        {
            float imposto;
            cout << "\nQual o ano do carro? ";
            cin >> ano;

            if(ano==2012)
            {
                imposto=500;
            }
            else if(2012-ano>=10)
            {
                imposto=0;
            }
            else if(ano-2012==1)
            {
                imposto=400;
            }
            else if(ano-2012==2)
            {
                imposto=300;
            }
            else if(ano-2012==3)
            {
                imposto=200;
            }
            else if(2012-ano==1)
            {
                imposto=400;
            }
            else if(2012-ano==2)
            {
                imposto=300;
            }
            else if(2012-ano==3)
            {
                imposto=200;
            }
            else
            {
                imposto=100;
            }

            cout << "O imposto e: R$" << imposto;

        }
};

int main()
{
    int i;
    Carro classCarros[5];

    for(i=0;i<5;i++)
    {
        classCarros[i].calcularImposto();
    }

    return 0;
}
