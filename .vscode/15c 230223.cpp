// 15c 23/02/23 cual es el mayor numero entre grupos de numeros asignados por el usuario (el usuario va asignando numeros repetidamente )
#include <iostream>
using namespace std;
int main(){
    /*cn: es cuantos numeros quiere evaluar
    n:numero
    nt:es numero mayor
    c:contador
    m:mayor absoluto
    mn:menor absoluto
    sn:suma de numeros
    con:cantidad de numeros
    p:promedio
    */
    int otro,cn,n,nt,c,m,mn;
    double p,sn,con;
    cout.precision(2);
    otro=1;m=0,c=0,sn=0,con=0;
    //este while es para repetir todo el programa si ingresa 1 vuelve a ingresar y si es otro numero se sale
    while(otro==1){
        cout<<"ingrese la cantidad de numeros a evaluar ";cin>>cn;
        nt=0;
        //este while funciona con cn,si cn es 0 se sale del while
        while(cn>0){
            cout<<"ingrese un numero ";cin>>n;
            if(n>nt){
                nt=n;
            }
            //contador y suma de numeros mas la cantidad de veces que se ingresa un numero
            cn=cn-1;
            sn=sn+n;
            con=con+1;
            //este if funciona para poder asignar el valor mn que es el numero menor
            if(mn==0){
                mn=n;
            }    
                else{
                    if(n<mn){
                        mn=n;
                    }
            }
        }
    //contador del while otro
    c=c+1;
    cout<<"el numero mayor es "<<nt<<endl;
    //if para guardar el mayor absoluto
    if(nt>m){
        m=nt;
    }
    cout<<"ingrese 1 para continuar el programa de lo contrario eliga otro numero ";cin>>otro;
    }
    //operacion de promedio
    p=sn/con;
    cout<<"\ncantidad de veces de repeticion "<<c;
    cout<<"\nel numero mayor absoluto es "<<m;
    cout<<"\nel numero menor absoluto es "<<mn;
    cout<<"\nel promedio es "<<p;
    return 0;
}