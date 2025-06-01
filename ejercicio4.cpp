#include <iostream>
using namespace std;
int sumaDivisores(int val);
void esPerfecto(int suma, int val);
bool esPositivo(int val);

int main(){
    int numero;
    cout<<"Detector de numeros perfectos"<<endl;
    cout<<"Ingrese su numero: "; cin>>numero;
    if(esPositivo(numero))//llamada a la función esPositivo
        esPerfecto(sumaDivisores(numero), numero);//llamadas a las funciones esPerfecto y sumaDivisores
    else{
        cout<<"Error: el numero ingresado no es positivo.\n";
        return 1;
    }
    return 0;
}

//definición de función sumaDivisores
int sumaDivisores(int val){
    int suma;
    suma = 0;//variable local
    for(int i = 1; i <= val/2; i++){
        if(val%i == 0){
            suma = suma + i;
        }
    }
    return suma;
}

//definición de función esPerfecto
void esPerfecto(int suma, int val){
    if(suma == val){
        cout<<"El numero "<<val<<" es un numero perfecto.\n";
    }
    else
        cout<<"El numero "<<val<<" NO es un numero perfecto.\n";
}

//definición de la función esPositivo
bool esPositivo(int val){
    return val > 0;
}