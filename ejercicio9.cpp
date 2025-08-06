#include <iostream>
using namespace std;
int factorial(int);
void suma(float);

int main(){
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    suma (n);
    return 0;
}

int factorial (int a){
    int f;
    f = 1;
    for (int i=2; i<=a; i++){
        f = f*i;
    }
    return f;
}

void suma (float b){
    float S;
    S = 0;
    for (float i=1; i<=b; i++){
        S = S + ((factorial(i)) / (2*i));
    }
    cout << "La suma es " << S << "." << endl;
}