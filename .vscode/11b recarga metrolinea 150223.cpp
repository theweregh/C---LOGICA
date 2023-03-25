//11a recarga metrolinea 15/02/23 
#include <iostream>
using namespace std;
int main(){
    /*
    vlrpsj=valor pasaje
    cntvjs=cantidad de viajes
    sldact=saldo actual
    dnrrcr=dinero a recargar
    cp=cantidad de personas que pasaron
    cpr=cantidad de dinero recojido
    me=menor cantidad de dinero recojido
    m=mayor cantidad de dinero recojido
    nr=cuantos no recargaron
    sn=suma de dnrrcr
    p=promedio
    */
    int vlrpsj,cntvjs,sldact,dnrrcr,otro,cp,cpr,me,m,sn,nr,p;
    cp=0;
    cpr=0;
    me=0;
    m=0;
    sn=0;
    nr=0;
    vlrpsj=2500;
    otro=1;
    while(otro==1){
        cout<<"digite cantidad de viajes que desea ";cin>>cntvjs;
        cout<<"digite el saldo actual ";cin>>sldact;
        dnrrcr=(vlrpsj*cntvjs)-sldact;
        if(dnrrcr>0){
            cout<<"debe recargar "<<dnrrcr<<endl;
        }
        else{
            cout<<"no debe recargar"<<endl;
        }
        cp=cp+1;
        cpr=cpr+dnrrcr;
        if(dnrrcr>m){
            m=dnrrcr;
        }
        if(me==0){
            me=dnrrcr;
        }
        else{
            if(dnrrcr<me){
                me=dnrrcr;
            }
        }
        if(dnrrcr==0){
            nr=nr+1;
        }
        sn=sn+dnrrcr;
        cout<<"ingrese 1 para continuar de lo contrario ingrese otro numero ";cin>>otro;
    }
    p=sn/cp;
    cout<<"cantidad de personas que pasaron "<<cp<<endl;
    cout<<"la mayor recarga es "<<m<<endl;
    cout<<"la menor recarga es "<<me<<endl;
    cout<<"la suma total de los que recargaron es "<<sn<<endl;
    cout<<"cantidad de personas que no recargaron "<<nr<<endl;
    cout<<"el promedio es "<<p<<endl;
    return 0;
}
