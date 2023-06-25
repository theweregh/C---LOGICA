#include <iostream>
using namespace std;
int main(){
    int q,c,n,i,ci,cp;
    cp = 0;
    ci = 0;
    cout<<"ingrese la cantidad de numeros que desea ingresar ";cin>>q;
    int p [q];
    int I [q];
    for(c=0;c<q;c++){
        cout<<"ingrese un numero ";cin>>n;
        if(n%2==0){
            p[cp]=n;
            cp+=1;
        }
        else{
            I[ci]=n;
            ci+=1;
        }
    }
    for(i=0;i<cp;i++){
        cout<<"los numeros pares son "<<p[i]<<endl;
    }
    for(i=0;i<ci;i++){
    cout<<"los numeros impares son "<<I[i]<<endl;
    }
    return 0;
}
