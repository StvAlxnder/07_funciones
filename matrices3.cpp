#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    int A[n][3*n];
    for (int i = 0; i<n; i++){
        for (int j = 0; j<3*n; j++){
            if(i == 0 || j == 0 || i == n-1 || j == (3*n)-1){
                A[i][j] = 1;
            } else{
                A[i][j] = 0;
            }
        }
    }
    for (int i = 0; i<n; i++){
        for (int j = 0; j<3*n; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}