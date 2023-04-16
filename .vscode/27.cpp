/* 27 2023/03/16 
hacer el df y la td para un programa que permita determinar la cantidad de 
personas que cumplen años por cada uno de los meses teniendo en cuenta que el
grupo de personas es limitado y el programa debe terminar cuando el usuario indique
que no hay mas , asuma que si a usted le pregunta el mes al usuario el no va a
decir trece , ni va a decir 0 ,ni va a decir veinte ,es decir no valide el mes
*/
#include<iostream>
using namespace std;
int main(){
    int otro=1,c1=0,c2=0,c3=0,c4=0,m;
    while(otro==1){
        do
    {
        cout<<"ingrese el mes en el que nacio ";cin>>m;
    } while (m<=0 or m>12);
    switch(m){
    case 1:
    case 2:
    case 3:
    c1+=1;
    break;
    case 4:
    case 5:
    case 6:
    c2+=1;
    break;
    case 7:
    case 8:
    case 9:
    c3+=1;
    break;
    case 10:
    case 11:
    case 12:
    c4+=1;
    break;
    }
    cout<<"ingrese 1 para continuar ";cin>>otro;
    }
    cout<<"primer trimestre: "<<c1<<endl;
    cout<<"segundo trimestre: "<<c2<<endl;
    cout<<"tercer trimestre: "<<c3<<endl;
    cout<<"cuarto trimestre: "<<c4<<endl;
    return 0;
}