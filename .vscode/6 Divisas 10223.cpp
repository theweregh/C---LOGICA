/*6 Divisas 1/02/23
hacer el df y la tabla de analisis para un programa que me permita determinar cuantos
dineros tengo en pesos a partir de la cantidad de dolares euros reales soles que tengo
ahorrados de mis diferentes viajes
*/
#include <iostream>
using namespace std;
int main(){
    int ud,ue,ur,us,p,d,e,r,s;
    ud=4600;
    ue=5000;
    ur=900;
    us=1200;
    cout<<"ingrese cuantos dolares tiene ";cin>>d;
    cout<<"ingrese cuantos euros tiene ";cin>>e;
    cout<<"ingrese cuantos reales tiene ";cin>>r;
    cout<<"ingrese cuantos soles tiene ";cin>>s;
    p=(d*ud)+(e*ue)+(r*ur)+(s*us);
    cout<<"el promedio es "<<p<<endl;
    return 0;
}
