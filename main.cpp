#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int contador = 1;
    while(contador != 0){

        int n1, n2;
        cout << "TRANSFORMACAO LINEAR DE 'N' NUMEROS\n";
        cout << "==============================================\n";
        cout << "Digite o tamanho de 'u': ";
        cin >> n1;
        cout << "Digite o tamanho de 'v': ";
        cin >> n2;
        cout << "==============================================\n";

        if(n1 == n2){

            double u[n1];
            double v[n2];
            double tamanhoDeU = 0,
                   tamanhoDeV = 0,
                   produtoEscalar = 0;

            for(int i = 0; i < n1 && i < n2; i++){
                cout << "Digite o valor de 'u' na posicao " << i << ": ";
                cin >> u[i];
                cout << "Digite o valor de 'v' na posicao " << i << ": ";
                cin >> v[i];
                produtoEscalar += u[i] * v[i];
                tamanhoDeU += u[i] * u[i];
                tamanhoDeV += v[i] * v[i];
            }

            tamanhoDeU = sqrt(tamanhoDeU);
            tamanhoDeV = sqrt(tamanhoDeV);

            //cout << "\n\n" << produtoEscalar;

            float pi = 3.1415,
                  radiano = 0,
                  anguloEmGraus = 0;
            int grau = 180;

            radiano = produtoEscalar / (tamanhoDeU * tamanhoDeV);

            anguloEmGraus = acos(radiano) * grau / pi;

            cout << "==============================================\n";
            cout << "\n\n O ângulo " << radiano << " radianos em graus e' = "<< anguloEmGraus << " graus" << endl;
        }else{
            cout << "O tamanho de 'u' não pode ser diferente do tamanho de 'v'.\n";
            cout << "==============================================\n";
        }
    }
    return 0;
}
