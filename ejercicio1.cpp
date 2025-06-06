#include <iostream>/*2025-119012 STEVE ALEXANDER MAMANI ESTELA*/
#include <iomanip>
using namespace std;
//prototipos de funciones resta y producto
void resta(int val1, int val2);
int producto(int val1, int val2);
int suma(int val1, int val2);
void division(double val1, double val2);

int main(){
    int num1, num2, resultado;
    cout<<"Ingrese el primer numero: " ; cin>>num1;
    cout<<"Ingrese el segundo numero: " ; cin>>num2;

    //llamadas a la función resta
    if(num1!=num2){//condición para evitar dar dos resultados iguales
        resta(num1, num2);
        resta(num2, num1);
    }
    else
        resta(num1, num2);

    //llamada a la función suma
    resultado = suma(num1, num2);
    cout<<"\nLa suma de "<<num1<<" + "<<num2<<" es "<<resultado;

    //llamada a la función producto
    resultado = producto(num1,num2);

    cout<<"\nLa multiplicacion de "<<num1<<" por "<<num2<<" es "<<resultado;
    
    //llamada a la función división
    if(num1!=num2){//condición para evitar dar dos resultados iguales
        division(num1, num2);
        division(num2, num1);
    }
    else
        division(num1, num2);
    return 0;
}

//definición de la función resta
void resta(int val1, int val2){
    int sustrac; //variable local
    sustrac = val1 - val2;
    cout<<"\nLa resta de "<<val1<<" - "<<val2<<" es "<<sustrac;
}

//definición de la función suma
int suma(int val1, int val2){
    int adicion; //variable local
    adicion = val1 + val2;
    return(adicion);
}

//definición de la función producto
int producto(int val1, int val2){
    int prod; //variable local
    prod = val1*val2;
    return(prod);
}

//definición de la función división
void division(double val1, double val2){
    double cociente;
    if(val2==0){//condición para evitar dividir entre cero
        cout<<"\nLa división de "<<val1<<" entre "<<val2<<" es indefinida.";
    }
    else{
        cociente=val1/val2;
        cout<<"\nLa division de "<<val1<<" entre "<<val2<<" es "<<fixed<<setprecision(3)<<cociente;//establece el máximo de decimales a 3
        cout<<fixed<<setprecision(0);//vuelve a establecer el máximo de ´variables a 0
    }
}