#include <iostream>
using namespace std;
int cantidadDivisores(int val);
void esPrimo(int numDivisores);

int main(){
    int num;
    cout<<"Detector de numeros primos"<<endl;
    cout<<"Ingrese un numero: "; cin>>num;
    cout<<"El numero "<<num;
    esPrimo(cantidadDivisores(num));
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

//definición de la función esPrimo
void esPrimo(int numDivisores){
    if(numDivisores != 2)
        cout<<" NO es primo.\n";
    else
        cout<<" SI es primo.\n";
}