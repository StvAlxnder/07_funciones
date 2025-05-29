#include <iostream>/*2025-119012 STEVE ALEXANDER MAMANI ESTELA*/
using namespace std;
//prototipos de funciones resta y producto
void resta(int val1, int val2);
int producto(int val1, int val2);

int main(){
    int num1, num2, resultado;
    cout<<"Ingrese el primer numero: " ; cin>>num1;
    cout<<"Ingrese el segundo numero: " ; cin>>num2;

    //llamadas a la función resta
    resta(num1,num2);
    resta(num2,num1);

    //llamada a la función producto
    producto(num1,num2);

    cout<<"\nLa multiplicación de "<<num1<<" por "<<num2<<" es "<<resultado;
    return 0;
}

//definición de la función resta
void resta(int val1, int val2){
    int sustrac; //variable local
    sustrac = val1 - val2;
    cout<<"La resta de "<<val1<<" - "<<val2<<" es "<<sustrac;
}

//definición de la función producto
int producto(int val1, int val2){
    int prod; //variable local
    prod = val1*val2;
    return(prod);
}