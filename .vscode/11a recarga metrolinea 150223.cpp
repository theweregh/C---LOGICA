//11 recarga metrolinea 15/02/23 
#include <iostream>
using namespace std;
int main(){
    /*vlrpsj=valor pasaje
    cntvjs=cantidad de viajes
    sldact=saldo actual
    dnrrcr=dinero a recargar
    */
    int vlrpsj,cntvjs,sldact,dnrrcr,otro;
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
        cout<<"ingrese 1 para continuar de lo contrario ingrese otro numero ";cin>>otro;
    }
    return 0;
}
