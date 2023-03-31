/*4 VIAJES DE FERRETERIA 230202 
hacer el df y la td para un programa que requiere una ferreteria el cual 
calcule el peso total en toneladas de los pedidos que hacen los clientes 
para determinar en cuantos vuajes de a cuatro toneladas se pueden entregar...
sabiendo que vende:
tabletas en cajas 2000gr
arena en biltos de 2 arrobas(@)
ladrillos de a libra
cementos en bultos de 50kg
1@=12.5 kg
1@= 23lb
1@= 12,5/1000 toneladas
1TON = 1000kg
l= cantidad de ladrillos
c=tabletas en cajas
b=bulto de cemento
a=arena
v=numero de viajes
s=validar si el numero de viajes(v) es decimal si es le sumamos 1 viaje a numero de viajes
p= operacion
*/
#include <iostream>
using namespace std;
int main(){
    int l,c,b,a,p,v,d,s;
    cout<<"ingrese cantidad de ladrillos ";cin>>l;
    cout<<"ingrese cantidad de tableta en cajas  ";cin>>c;
    cout<<"ingrese cantidad de cemento ";cin>>b;
    cout<<"ingrese cantidad de arena ";cin>>a;
    p=(l*1)+(c*100)+(b*4)+(a*25);
    v=p/8000;
    s=p%8000;
    if(s>0) v+=1;
    cout<<"numero de viajes es "<<v<<endl;
    return 0;
}