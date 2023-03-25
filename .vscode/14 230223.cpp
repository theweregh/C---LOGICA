//14 23/02/23 cual es el numero entre N numeros asignados por el usuario(la cantidad de numero N tambien determinda por el usuario)
#include <iostream>
using namespace std;
int main(){
    int Nn,n,M;
    cout<<"ingrese la cantidad de numeros que desea evaluar ";cin>>Nn;
    while(Nn>0){
        cout<<"ingrese un numero ";cin>>n;
        Nn=Nn-1;
        if(n>M){
            M=n;
        }
    }
    cout<<"el numero mayor es "<<M<<endl;
    return 0;
}