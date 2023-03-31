/* 2 vueltas 230126 
hacer la tabla de analisis y el df para un programa que permita determinar los vueltos
que debe dar una maquina que vende productos a partir del valor a retirar
asuma que solo entraran billetes de 2000
los productos a vender son 200,300,500,700,1200,1500
*/
#include<iostream>
using namespace std;
int main(){
    int vlr,vlrt,uvp,m500,m200,m100;
    uvp = 2000;
    cout<<"ingrese un valor ";cin>>vlr;
    vlrt =uvp-vlr;
    m500 = vlrt/500;
    m200 = (vlrt%500)/200;
    m100 = ((vlrt/500)%200)/100;
    cout<<"monedas de 500: "<<m500<<endl;
    cout<<"monedas de 200: "<<m200<<endl;
    cout<<"monedas de 100: "<<m100<<endl;
    return 0;
}