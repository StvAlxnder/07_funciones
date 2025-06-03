#include <iostream>
using namespace std;

int main(){
    int num, divisores;
    cout<<"Detector de numeros primos"<<endl;
    cout<<"Ingrese un numero: "; cin>>num;
    divisores = 0;
    for(int i = 1; i <= num; i++){
        if(num % i == 0)
            divisores++;
    }
    if(divisores != 2)
        cout<<"El numero "<<num<<" NO es primo.";
    else
        cout<<"El numero "<<num<<" SI es primo.";
    return 0;
}