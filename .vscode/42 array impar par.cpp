/*42 
hacer el df y la td de un programa que permita a partir de una cantidad definida
por el usuario de numeros agrupar ese listado de numeros por pares e impares y para
finalizar los imprima 
universo paralelo
hacer un programa que permita ,mientras el usuario indique que hay mas numeros,
ingresar numeros repetidamente y agruparlos por pares e impares y al finalizar
imprima los 2 arreglos el de pares y impares
otro universo paralelo al primerlo llamarlo quiz tema a y los responden los pares  
y al segundo lo  llaman b y los responden los impares
otro universo paralelo 
quiz que debe imprimir el resultado numeros de manera ordenada o mejor de manera desordenada y
luego de manera ordenada
*/
#include <iostream>
using namespace std;
int main(){
    int q,c,n,i,ci,cp;
    cp = 0;
    ci = 0;
    cout<<"ingrese la cantidad de numeros que desea ingresar ";cin>>q;
    int p [q];
    int I [q];
    for(c=0;c<q;c++){
        cout<<"ingrese un numero ";cin>>n;
        if(n%2==0){
            p[cp]=n;
            cp+=1;
        }
        else{
            I[ci]=n;
            ci+=1;
        }
    }
    for(i=0;i<cp;i++){
        cout<<"el numero "<<p[i]<<" es par"<<endl;
    }
    for(i=0;i<ci;i++){
    cout<<"el numero "<<I[i]<<" es impar"<<endl;
    }
    return 0;
}