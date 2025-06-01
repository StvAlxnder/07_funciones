#include <iostream>
using namespace std;

int main(){
    int numero, suma;
    cout<<"Detector de numeros perfectos"<<endl;
    cout<<"Ingrese su numero: "; cin>>numero;
    suma = 0;
    for(int i = 1; i < numero; i++){
        if(numero%i==0){
            suma = suma + i;
        }
    }
    if(suma==numero){
        cout<<"El numero "<<numero<<" es un numero perfecto.";
    }
    else
        cout<<"El numero "<<numero<<" NO es un numero perfecto.";
    return 0;
}