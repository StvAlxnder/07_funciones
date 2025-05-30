#include <iostream>
using namespace std;
int esPositivo(int val);
int serieFibonacci(int val);

int main(){
    int nTerminos, suma;
    cout<<"Ingrese el numero de terminos de la serie de Fibonacci que desea generar: "; cin>>nTerminos;
    if(esPositivo(nTerminos)==0)//llamada a la función positivo
        return 1;
    suma = serieFibonacci(nTerminos);//llamada a la función serieFibonacci
    cout<<"\nLa suma de los terminos es: "<<suma;
    return 0;
}

//definición de la función esPositivo
int esPositivo(int val){
    if(val>0)
        return 1;
    else{
        cout<<"Error: el numero ingresado no es positivo.\n";
        return 0;
    }
}

//definición de la función serieFibonacci
int serieFibonacci(int val){
    int c;          //
    int a = 0;      // variables
    int b = 1;      // locales
    int suma = 0;   //
    cout<<"Serie de Fibonacci: ";
    for(int i = 1; i<=val; i++){
        cout<<a<<" ";
        suma = suma + a;
        c = a + b;
        a = b;
        b = c;
    }
    return suma;
}