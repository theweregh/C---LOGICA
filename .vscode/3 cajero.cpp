/*3 cajero 230126
construir un programa que permita determinar la menor cantidad posible de billetes 
entre $50,$20,$10 entregando la mejor denomincaion cuando sea posible pasando a la
siguiente si hace falta
a.el usuario asigna siempre un valor a retirar permitido (no valide)
b.no es necesario entregar billetes de todas las denominaciones
c.el usuario su ingresa la targeta adecuada y su contraseña es la correcta
d.siempre hay billetes en el cajero
*/
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
