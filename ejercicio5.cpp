#include <iostream>
using namespace std;
int sumaDivisoresPropios(int val);

int main(){
    int num1, num2;
    cout<<"Detector de numeros amigos\n";
    cout<<"Ingrese dos numeros enteros positivos: "; cin>>num1>>num2;
    if(sumaDivisoresPropios(num1) == num2 && sumaDivisoresPropios(num2) == num1)//llamada a la función sumaDivisoresPropios
        cout<<"Los numeros "<<num1<<" y "<<num2<<" SI son numeros amigos.\n";
    else
        cout<<"Los numeros "<<num1<<" y "<<num2<<" NO son numeros amigos.\n";
    return 0;
}

//definición de la función sumaDivisoresPropios
int sumaDivisoresPropios(int val){
    int suma;//variable local
    suma = 0;
    for(int i = 1; i < val; i++){
        if(val%i==0)
            suma = suma + i;
    }
    return suma;
}