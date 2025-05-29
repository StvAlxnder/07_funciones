#include <iostream>
using namespace std;

int main(){//función principal main
    int num1, num2, resto, cociente;
    cin>>num1>>num2;
    cociente=0;
    resto=0;
    if(num1>num2){
        do{
            resto = num1 - num2;
            cociente++;
            num1 = num1 - num2;
        }while(resto>=num2);
    }
    else{
    	do{
            resto = num2 - num1;
            cociente++;
            num2 = num2 - num1;
        }while(resto>=num1);
	}
    cout<<"El cociente es "<<cociente<<" y el residuo es "<<resto;
    return 0;
}