/*12 230215 DIAS FALTAN CUMPLE
HACER UN DF YLA TD PARA UN PROGRAMA QUE PERMITA DETERMINAR LA CANTIDAD DE DIAS QUE 
FALTA PARA EL CUMPLEAÑOS DE UNA PERSONA A PARTIR DEL MES Y DIA ACTUAL,Y EL MES Y DIA 
DE NACIMIENTO DE LA PERSONA
ma= mes actual
da= dia actual
mn= mes de nacimiento
dn= dia de nacimiento
DF= creo que es dias faltantes
*/
#include <iostream>
using namespace std;
int main(){
    int otro,ma,da,mn,dn,CD,DF,DA;
    otro=1;
    cout<<"ingrese ma ";cin>>ma;
    cout<<"ingrese da ";cin>>da;
    DA=((ma-1)*30)+da;
    while(otro == 1){
        cout<<"ingrese mn ";cin>>mn;
        cout<<"ingrese dn ";cin>>dn;
        CD=(((mn-1)*30)+dn);
    if(DA>CD) DF=(360-DA)+CD;
    else DF=CD-DA;
    cout<<"los dias faltantes son: "<<DF<<endl;
    }
    cout<<"ingrese 1 para continuar ";cin>>otro;
    return 0;
}