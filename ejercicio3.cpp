#include <iostream>
using namespace std;
int main(){
    int nTerminos, suma, a, b, c;
    cout<<"Ingrese el numero de terminos: "; cin>>nTerminos;
    a = 0;
    b = 1;
    suma = 0;
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