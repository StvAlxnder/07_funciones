#include <iostream>
using namespace std;
int cantidadDivisores(int val);

int main(){
    int num;
    cout<<"Detector de numeros primos"<<endl;
    cout<<"Ingrese un numero: "; cin>>num;
    if(cantidadDivisores(num) != 2)//llamada a la función cantidadDivisores
        cout<<"El numero "<<num<<" NO es primo.";
    else
        cout<<"El numero "<<num<<" SI es primo.";
    return 0;
}

//definición de la función cantidadDivisores
int cantidadDivisores(int val){
    int divisores = 0;
    for(int i = 1; i <= val; i++){
        if(val % i == 0)
            divisores++;
    }
    return divisores;
}