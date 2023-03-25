//4 VIAJES DE FERRETERIA 2/02/23
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
    if(s>0){
        v=v+1;
    }
    cout<<"numero de viajes es "<<v<<endl;
    
    
    return 0;
}