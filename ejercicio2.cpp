#include <iostream>
using namespace std;
int restasSucesivas(int val1, int val2);
int division(int resto, int val1, int val2);
int enteroPositivo(int val1, int val2);

int main(){//función principal main
    int num1, num2, resto, cociente;
    cout<<"Ingrese el primer numero: "; cin>>num1;
    cout<<"Ingrese el segundo numero: "; cin>>num2;
    if(enteroPositivo(num1, num2)==1)
        return 1;
    if(num1>num2){
        resto = restasSucesivas(num1, num2);//llamada a la función restasSucesivas
        cociente = division(resto, num1, num2);//llamada a la función division
    }
    else{
    	resto = restasSucesivas(num2, num1);//llamada a la función restasSucesivas
        cociente = division(resto, num2, num1);//llamada a la función division
	}
    cout<<"El cociente es "<<cociente<<" y el residuo es "<<resto;
    return 0;
}

//definición de la función restasSucesivas
int restasSucesivas(int val1, int val2){
    while(val1>=val2){
        val1 = val1 - val2;
    }
    return val1;
}

//definición de la función division
int division(int resto, int val1, int val2){
    int cociente = (val1 - resto)/val2;
    return cociente;
}

//definición de la función enteroPositivo
int enteroPositivo(int val1, int val2){
    if(val1 > 0 && val2 > 0)
        return 0;
    else{
        cout<<"Error: los numeros tienen que ser enteros positivos.";
        return 1;
    }
}