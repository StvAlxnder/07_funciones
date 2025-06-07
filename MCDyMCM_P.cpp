#include <iostream>
#include <cstdlib>
using namespace std;

void MCDyMCM(int a, int b, int *mcd, int *mcm);
int algEuclides(int a, int b);

int main () {
    int x, y, rMCD, rMCM;
    cout<<"Calcula MCD y MCM"<<endl
        <<"Ingrese el primer numero: "; cin>>x;
    cout<<"Ingrese el segundo numero: "; cin>>y;
    MCDyMCM(x, y, &rMCD, &rMCM);
    cout<<"MCD: "<<rMCD<<endl;
    cout<<"MCM: "<<rMCM<<endl;
    return 0;
}

//definición de la función MCDyMCM
void MCDyMCM(int a, int b, int *mcd, int *mcm){
    a = abs(a);
    b = abs(b);
    if (a == 0 || b == 0) {
    if (a == 0 && b == 0) {
        *mcd = 0;
        *mcm = 0;
    } else if (a == 0) {
        *mcd = b;
        *mcm = 0;
    } else {
        *mcd = a;
        *mcm = 0;
    }
    return;
}
    *mcd = algEuclides(a, b);
    *mcm = (a / *mcd) * b;
}

//definición de la función algEuclides
int algEuclides(int a, int b){
    while (b != 0) {
        int temp = b;//variable local
        b = a % b;
        a = temp;
    }
    return a;
}