#include <iostream>
#include <cstdlib>
using namespace std;

void MCDyMCM(int a, int b, int *mcd, int *mcm);

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
    int i = 1;
    *mcd = 1;
    while (i <= a && i <= b){
        if (a % i == 0 && b % i == 0)
            *mcd = i;
        i = i + 1;
    }
    *mcm = (a*b) / (*mcd);
}