#include <iostream>
using namespace std;
bool esPositivo(int val);
int cantidadDivisores(int val);
void esPrimo(int numDivisores);

int main(){
    int num;
    cout<<"Detector de numeros primos"<<endl;
    cout<<"Ingrese un numero: "; cin>>num;
    if(!esPositivo(num)){
        cout<<"Error: el numero ingresado no es positivo\n";
        return 1;
    }
    cout<<"El numero "<<num;
    esPrimo(cantidadDivisores(num));
    return 0;
}

//definición de la función cantidadDivisores
int cantidadDivisores(int val){
    int divisores = 0;//variable local
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

//definición de la función esPositivo
bool esPositivo(int val){
    return val > 0;
}