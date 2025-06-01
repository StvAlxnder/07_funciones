#include <iostream>
using namespace std;
int sumaDivisores(int val);
void esPerfecto(int suma, int val);

int main(){
    int numero;
    cout<<"Detector de numeros perfectos"<<endl;
    cout<<"Ingrese su numero: "; cin>>numero;
    esPerfecto(sumaDivisores(numero), numero);
    return 0;
}

//definición de función sumaDivisores
int sumaDivisores(int val){
    int suma;
    suma = 0;
    for(int i = 1; i < val; i++){
        if(val%i == 0){
            suma = suma + i;
        }
    }
    return suma;
}

//definición de función esPerfecto
void esPerfecto(int suma, int val){
    if(suma == val){
        cout<<"El numero "<<val<<" es un numero perfecto.";
    }
    else
        cout<<"El numero "<<val<<" NO es un numero perfecto.";
}