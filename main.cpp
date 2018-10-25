/*Metodo de Simpson para a integral de 'x * cos x^2'*/

#include <iostream>
#include <math.h>
#define PI 3.14159

using namespace std;

int main()
{
    int n, contador = 0;
    cout << "\nCLACULADORA INTEGRAL POR METODO DE SIMPSON\n";
    cout << "\n==========================================\n\n";
    do{
    inicio2:
        cout << "Entre com um numero par de interacoes: ";
        cin >> n;

        if(n % 2 == 0){
            double valor = (0 - PI) / n;
            double x[n + 1], xProx = 0;
            for(int i = 0; i < (n + 1); i++){
                if(i == 0){
                    x[i] = 0;
                }else if(i > 0 && i < (n + 1)){
                    x[i] = xProx + valor;
                }
                xProx = x[i];
            }

            double somatorio = 0;
            double fX[n + 1];
            double quadradoDeX = 0, cosDoQuadrado = 0, multCosQuad = 0;

            for(int i = 0; i < (n + 1); i++){
                if(i == 0){
                    fX[i] = x[i];
                }else if(i % 2 == 1 && i < n){
                    quadradoDeX = pow(x[i], 2);
                    cosDoQuadrado = cos(quadradoDeX);
                    multCosQuad = cosDoQuadrado * x[i];
                    fX[i] = 4 * multCosQuad;
                }else if(i % 2 == 0 && i < n){
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

            double resultado = 0.3 * (valor * somatorio);
            cout << "\n==========================================\n\n";
            printf("O resultado para %d interacoes foi de %.5f\n", n, resultado);
            cout << "\n==========================================\n\n";
        }else{
            cout << "\n===\n\nO valor de interacoes deve ser par.\n\n===\n\n";
            goto inicio2;
            continue;
        }

    }while(contador == 0);
    return 0;
}
