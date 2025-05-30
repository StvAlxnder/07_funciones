#include <iostream>
using namespace std;
int main(){
    int nTerminos, suma, a, b, c;
    cout<<"Ingrese el numero de terminos de la serie de Fibonacci que desea generar: "; cin>>nTerminos;
    a = 0;
    b = 1;
    suma = 0;
    if(nTerminos<=0){
        cout<<"Error: Ingrese un número positivo.";
        return 1;
    }
    for(int i=1; i<=nTerminos; i++){
        cout<<a<<" ";
        suma = suma + a;
        c = a + b;
        a = b;
        b = c;
    }
    cout<<"\nLa suma de los terminos es: "<<suma;
    return 0;
}