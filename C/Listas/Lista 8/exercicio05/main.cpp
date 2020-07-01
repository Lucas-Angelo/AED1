#include <iostream>

using namespace std;

class Aluno
{
    private:
        string nome;
        int serie;
        int grau;
        int salvarID;
        static int contador;
    public:
        static int somar()
        {
            contador++;
            return contador;
        }
        Aluno()
        {
            salvarID = Aluno::contador++;
        }
        void solicitarDados()
        {
            cout << "Digite o nome: ";
            getline(cin >> ws, nome);
            cout << "Digite a serie: ";
            cin >> serie;
            cout << "Digite o grau: ";
            cin >> grau;
        }
        void imprimirDados()
        {
            cout << "\nO nome e: " << nome << endl;
            cout << "A serie e: " << serie << endl;
            cout << "O grau e: " << grau << endl;
        }
        void alunosCadastrados()
        {
            cout << "\nO total de alunos cadastrados e: " << contador-1 << endl;
        }
};
int Aluno::contador = 0;

int main()
{
    Aluno alu1, matrizAluno[10][3];

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout << "Aluno: " << i+1 << "-" << j+1 << endl;
            matrizAluno[i][j].solicitarDados();
        }
    }

    alu1.alunosCadastrados();

    return 0;
}
