//18c contador han pasado
#include <iostream>
using namespace std;
int main(){
    int qr,c,t,otro,v,p;
    qr=1;
    while (qr==1){
        c=0;t=0;otro=1;
        while (otro==1){
            cout<<"ingrese un valor ";cin>>v;
            t+=v;c+=1;
            cout<<"ingrese 1 para continuar ";cin>>otro;
        }
    p=t/c;
    cout<<"el promedio es: "<<p<<endl;
    }
    return 0;
}