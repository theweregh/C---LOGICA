#include <iostream>
using namespace std;
int main(){
    double c,vlr,vlrt,vlrtl,cp,otro,p;
    c=0;
    otro = 1;
    while(otro==1){
    cout<<"ingrese cp ",cin>>cp;
    while(cp>c){
        cout<<"ingrese su dinero en dolares ";cin>>vlr;
        vlrt= vlr+vlrt;
        c=c+1;
    }    
    p=vlrt/cp;
    cout<<"el promedio es "<<p<<endl;
    cout<<"ingrese 1 para iniciar y 0 para acabar ";cin>>otro;
    }  
    return 0;
}  