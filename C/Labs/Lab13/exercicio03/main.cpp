#include <iostream>

using namespace std;

class Aluno
{
    private:
        int matricula;
        string nome;
        string curso;
        char turno;
        int periodo;
    public:
        void cadastrarAluno()
        {
            cout << "Digite a matricula: ";
            cin >> matricula;
            cout << "Digite o nome: ";
            getline(cin >> ws, nome);
            cout << "Digite o curso: ";
            getline(cin >> ws, curso);
            cout << "Menu de opcoes para o turno:" << endl << "M - Para matutino\nV - Para vespertino\nN - Para noturno" << endl;
            cout << "Digite sua opcao: ";
            cin >> turno;
            cout << "Digite o periodo: ";
            cin >> periodo;
        }
        void mostrarDados()
        {
            cout << "\nMatricula: " << matricula;
            cout << " Nome: " << nome;
            cout << " Curso: " << curso;
            cout << " Turno: " << turno;
            cout << " Periodo: " << periodo;
        }
};

int main()
{
    Aluno classAluno;
    classAluno.cadastrarAluno();
    classAluno.mostrarDados();
    cout << "\n";
    return 0;
}
