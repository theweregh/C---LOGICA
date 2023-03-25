//3 cajero
#include<iostream>
using namespace std;
int main(){
    int vlr,b50,b20,b10;
    cout<<"ingrese el valor a retirar "<<endl;cin>>vlr;
    b50= vlr/50;
    b20=(vlr%50)/20;
    b10=((vlr/50)%20)/10;
    cout<<"billetes de 50: "<<b50<<endl;
    cout<<"billetes de 20: "<<b20<<endl;
    cout<<"billetes de 10: "<<b10<<endl;
}
