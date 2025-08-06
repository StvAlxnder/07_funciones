#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    int A[n][n];
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            cout << "Ingrese el valor en la posición ("<<i<<", "<<j<<"): ";
            cin >> A[i][j];
        }
    }
    int S;
    S = 0;
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            if(i<j){
                S = S + A[i][j];
            }
        }
    }
    cout << "La sumatoria de los elementos superiores a la diagonal principal es " << S;
}