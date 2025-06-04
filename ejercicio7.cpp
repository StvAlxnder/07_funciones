#include <iostream>
using namespace std;
int combinatoria(int, int);
int factorial(int);

int main(){
    int num1, num2, C;
    cout<<"Funcion combinatoria\n"
        <<"Ingrese el total de elementos a combinar: "; cin >> num1;
    cout<<"Ingrese la cantidad a seleccionar: "; cin >> num2;
    C = combinatoria(num1, num2);
    cout<<"La respuesta es: "<<C<<endl;
    return 0;
}

//definición de la función combinatoria
int combinatoria(int m, int n){
    int combinacion;
    combinacion = (factorial(m)) / (factorial(n)*factorial(m-n));
    return combinacion;
}

//definición de la función factorial
int factorial(int n){
    int f;
    f=1;
    for(int i = 2; i<=n; i++){
        f=f*i;
    }
    return f;
}