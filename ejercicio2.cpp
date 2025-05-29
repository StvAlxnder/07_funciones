#include <iostream>
using namespace std;
int restasSucesivas(int val1, int val2);
int division(int resto, int val1, int val2);

int main(){//función principal main
    int num1, num2, resto, cociente;
    cout<<"Ingrese el primer numero: ";
    cin>>num1;
    cout<<"Ingrese el segundo numero: ";
    cin>>num2;
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
    int resto;
    do{
        resto = val1 - val2;
        val1 = val1 - val2;
    } while(resto>val2);
    return(resto);
}

//definición de la función division
int division(int resto, int val1, int val2){
    int cociente = (val1 - resto)/val2;
    return(cociente);
}