#include <iostream>

using namespace std;

int main()
{
    int qtdAlunos;

    cout << "Digite a quantidade de alunos: ";
    cin >> qtdAlunos;

    double vNota[qtdAlunos];
    string vNome[qtdAlunos];
    int reprovados = 0, aprovados = 0, i = 0;

    do{
        cout << "\nDigite o nome do aluno: ";
        cin >> vNome[i];

        cout << "Digite a nota do aluno " << vNome[i] << ": ";
        cin >> vNota[i];

        cout << "============================================";

        if(vNota[i] < 60){
            reprovados++;
        }else{
            aprovados++;
        }
        i++;
    }while(i < qtdAlunos);

    cout << "\nA quantidade de alunos aprovados foi de: " << aprovados << ".";
    cout << "\nE a quantidade de alunos reprovados é de: " << reprovados << ".";
    cout << "\n============================================";

    i = 0;

    do{
        if(vNota[i] < 60){
            cout << "\n" << vNome[i] << " reprovado com nota " << vNota[i] << ".";
        }else{
            cout << "\n" << vNome[i] << " aprovado com nota " << vNota[i] << ".";
        }
        i++;
    }while(i < qtdAlunos);

    return 0;
}
