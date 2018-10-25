/*Metodo de Trapezio para a funcao de 'x * cos x^2'*/

#include <iostream>
#include <math.h>
#define PI 3.14159

using namespace std;

int main()
{
    int n, contador = 1;
    cout << "\n\nCLACULADORA INTEGRAL POR METODO DE TRAPEZIO\n";
    cout << "\n===========================================\n\n";
    do{
    inicio:
        cout << "Digite o numero de interacoes: ";
        cin >> n;

        double valor = (0 - PI) / n;
        double x[n + 1], xProx = 0;

        for(int i = 0; i < (n + 1); i++){
            if(i == 0){
                x[i] = 0;
            }else if(i > 0 && i < (n + 1)){
                x[i] = valor + xProx;
            }
            xProx = x[i];
        }

        double somatorio = 0;
        double fX[n + 1];
        double quadradoDeX = 0, cosDoQuadrado = 0, multCosQuad = 0;

        for(int i = 0; i < (n + 1); i++){
            if(i == 0){
                fX[i] = x[i];
            }else if(i > 0 && i < n){
                quadradoDeX = pow(x[i], 2);
                cosDoQuadrado = cos(quadradoDeX);
                multCosQuad = cosDoQuadrado * x[i];
                fX[i] = 2 * multCosQuad;
            }else{
                quadradoDeX = pow(x[i], 2);
                cosDoQuadrado = cos(quadradoDeX);
                multCosQuad = cosDoQuadrado * x[i];
                fX[i] = multCosQuad;
            }
            somatorio = fX[i] + somatorio;
        }

        double resultado = 0.5 * (valor * somatorio);
        cout << "\n===========================================\n\n";
        printf("O resultado para %d interacoes foi de %.5f.\n", n, resultado);
        cout << "\n===========================================\n\n";

    }while(contador == 1);

    return 0;
}
