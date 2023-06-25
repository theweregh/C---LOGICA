/*230208 8B cajero 2
CU= cantidad de usos
CD=cantidad digitadas
*/
#include <iostream>
using namespace std;
int main(){
    //1
    int TB,CU,CE,vlr,B50,B20,B10;
    TB=0;CU=0;CE=0;
    //2
    cout<<"ingrese el valor a retirar";cin>>vlr;
    //3
    while(vlr>0){  
        //4
        if(vlr%10==0){
            B50=  (vlr/50);
            B20= (vlr%50)/20;
            B10= ((vlr%50)%20)/10;
            cout<<"B50: "<<B50<<"B20: "<<B20<<"B10: "<<B10;
            CU+=1;
        }
        else{
            cout<<"se equivoco";cin>>vlr;
        }
    }//fin de while
    cout<<"total de billetes es";
    cout<<"el total de billetes es: "<<TB<<"la cantidad de usos es: "<<CU;
    cout<<CE;
    return 0;
}
