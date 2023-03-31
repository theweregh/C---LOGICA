//13 23/02/23 numero mayor entre 2 numeros asignados por el usuario, tenga en cuenta que pueden ser iguales.
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"ingrese un numero para a ";cin>>a;
    cout<<"ingrese un numero para b ";cin>>b;
    if(a>b){
        cout<<"el numero mayor es "<<a<<endl;
    }
    else{
        if(b>a){
            cout<<"el numero mayor es "<<b<<endl;
        }
        else{
            if(a==b){
                cout<<"a y b son iguales "<<a<<endl;
            }
        }
    }  
    return 0;
}