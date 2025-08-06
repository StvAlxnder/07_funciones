#include <iostream>
using namespace std;
void rotarFuncion(int, int [][100], int [][100]);

int main(){
    int n;
    cin>>n;
    int A[n][100];
    int cont=0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            A[i][j] = cont+1;
            cont++;
        }
    }
    cout << "Matriz ingresada\n";
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    int AR[n][100];
    rotarFuncion(n, A, AR);
    cout << "\nMatriz rotada\n";
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout << AR[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

void rotarFuncion(int n, int A[][100], int B[][100]){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            B[i][j] = A[n-j-1][i];
        }
    }
}