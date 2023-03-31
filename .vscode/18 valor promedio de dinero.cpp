/*18 220223
hacer el df y la td para un programa que permita determinar, a partir de la cantidad de personas en un grupo
el valor promedio de dinero que tienen en dolares en su cuenta de ahorro, partiendo de que se le va a preguntar 
y se va a confiar en el usuario cuantos dolares tiene de saldo en su cuenta, el programa debe funcionar repetidamente
para diferentes grupos de personas
confie que el usuario va a dar un valor adecuado
g= cantidad de grupos
cgf= cantidad de grupos fallos
c=contador faltan
cp=cantidad de personas
v=valor
t=es la suma de los valores de cada persona
p=promedio
*/
#include <iostream>
using namespace std;
int main(){
    int g,cgf,cp,t,c,p,v;
    cout<<"ingrese la cantidad de grupos ";cin>>g;
    cgf=g;
    while(cgf>0){
        cout<<"ingrese la cantidad de personas ";cin>>cp;
        c=cp;t=0;
        while(c>0){
            cout<<"ingrese un valor ";cin>>v;
            t+=v;
            c-=1;
        }
        p=t/cp;
        cout<<"el promedio es: "<<p<<endl;
    }
    return 0;
}
