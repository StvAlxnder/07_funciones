#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    float A[7][4];
    float S1, S2, S3, S4, ST;
    S1 = 0;
    S2 = 0;
    S3 = 0;
    S4 = 0;
    for (int i = 0; i<7; i++){
        for (int j = 0; j<4; j++){
            cout << "Ingrese la venta de la sem" << j+1 << " , dia" << i+1 << ": ";
            cin >> A[i][j];
            if (j == 0){
                S1 = S1 + A[i][j];
            } else if (j == 1){
                S2 = S2 + A[i][j];
            } else if (j == 2){
                S3 = S3 + A[i][j];
            } else {
                S4 = S4 + A[i][j];
            }
        }
    }
    ST = ST + S1 + S2 + S3 + S4;
    cout << "\n\n Ventas de cuatro semanas";
    cout << "\n------------------------------------------------------\n";
    cout << fixed << setprecision(2);
    for (int i = 1; i<=4; i++){
        cout << setw(8) << "SEM" << i;
    }
    cout << "\n(L)";
    for (int j = 0; j<4; j++){
        cout << setw(8) << A[0][j];
    }
    cout << "\n(M)";
    for (int j = 0; j<4; j++){
        cout << setw(8) << A[1][j];
    }
    cout << "\n(M)";
    for (int j = 0; j<4; j++){
        cout << setw(8) << A[2][j];
    }
    cout << "\n(J)";
    for (int j = 0; j<4; j++){
        cout << setw(8) << A[3][j];
    }
    cout << "\n(V)";
    for (int j = 0; j<4; j++){
        cout << setw(8) << A[4][j];
    }
    cout << "\n(S)";
    for (int j = 0; j<4; j++){
        cout << setw(8) << A[5][j];
    }
    cout << "\n(D)";
    for (int j = 0; j<4; j++){
        cout << setw(8) << A[6][j];
    }
    cout << "\n------------------------------------------------------\n";
    cout << setw(10) << S1 << setw(10) << S2 << setw(10) << S3 << setw(10) << S4;
    cout << "\n\nVenta total del mes: "<< ST;
}