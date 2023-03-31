#include <iostream>
using namespace std;
int main() {
    int num, max,r,i, otro;
    do{
    cout<<"Ingrese un número ";cin>>num;
    cout<<"Ingrese un máximo ";cin>>max;
    r=num;
    for (i=1; i<=max; i+=1){
        r=r*i;
        cout<<r<<endl;
    }
    for (i=max; i>=2; i-=1){
        r=r/i;
        cout<<r<<endl;
    }
    cout<<"Ingrese 1 para continuar y 0 para terminar ";
    cin>>otro;
    }
    while(otro==1);
    cout<<"Gracias";
    return 0;
}