//13B 23/02/23 Cual es el mayor entre 3 numeros asignados
#include <iostream>
using namespace std;
int main(){
    int otro,a,b,c;
    otro=1;
    cout<<"ingrese un numero ";cin>>a;
    cout<<"ingrese un numero ";cin>>b;
    cout<<"ingrese un numero ";cin>>c;
    while(otro==1){
        if(a>b && a>c){
            cout<<a<<endl;
        }
        else{
            if(b>a && b>c){
                cout<<b<<endl;
            }
            else{
                cout<<c<<endl;
            }
            
        }
        cout<<"1 para repetir otro numero para salir";cin>>otro;
        cout<<"ingrese un numero ";cin>>a;
        cout<<"ingrese un numero ";cin>>b;
        cout<<"ingrese un numero ";cin>>c;
    }
    return 0;
}