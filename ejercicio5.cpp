#include <iostream>
using namespace std;

int sumaDivisoresPropios(int val);
void sonAmigos(int val1, int val2);
bool esPositivo(int val);

int main(){
    int num1, num2;
    cout<<"Detector de numeros amigos\n";
    do{
        cout<<"Ingrese el primer numero entero positivo: "; cin>>num1;
        if(!esPositivo(num1))
            cout<<"El numero debe ser mayor que 0.\n";
    }while(!esPositivo(num1));
    do{
        cout<<"Ingrese el segundo numero entero positivo: "; cin>>num2;
        if(!esPositivo(num2))
            cout<<"El numero debe ser mayor que 0.\n";
        else if(num2 == num1)
            cout<<"El numero debe ser distinto al primero.\n";
    }while(!esPositivo(num2) || num1 == num2);
    sonAmigos(num1, num2);
    return 0;
}

//definición de la función sumaDivisoresPropios
int sumaDivisoresPropios(int val){
    int suma = 0;//variable local
    for(int i = 1; i < val; i++){
        if(val%i==0)
            suma = suma + i;
    }
    return suma;
}

//definición de la función sonAmigos
void sonAmigos(int val1, int val2){
    if(sumaDivisoresPropios(val1) == val2 && sumaDivisoresPropios(val2) == val1)//llamada a la función sumaDivisoresPropios
        cout<<"Los numeros "<<val1<<" y "<<val2<<" SI son numeros amigos.\n";
    else
        cout<<"Los numeros "<<val1<<" y "<<val2<<" NO son numeros amigos.\n";
}

//definición de la función esPositivo
bool esPositivo(int val){
    return val>0;
}