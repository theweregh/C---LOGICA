/*7 operacion de 2 numeros 230201
hacer el df y la td para un programa que permita recibir 2 numero por teclado a y b
y devolver el resultado que daria sumarlos,restarlos,multiplicarlos,dividirlos y calcular el modulo del primero en el
segundo
*/
#include <iostream>
using namespace std;
int main(){
    int a,b,s,r,m,d,mo;
    cout<<"ingrese un numero para a ";cin>>a;
    cout<<"ingrese un numero para b ";cin>>b;
    while (b==0){
        cout<<"ingrese un numero diferente de 0 para b ";cin>>b;
    }
    s= a+b;
    r= a-b;
    m= a*b;
    d= a/b;
    mo= a%b;
    cout<<"el resultado de la suma es "<<s<<endl;
    cout<<"el resultado de la resta es "<<r<<endl;
    cout<<"el resultado de la multiplicacion es "<<m<<endl;
    cout<<"el resultado de la division es "<<d<<endl;
    cout<<"el resultado del residuo es "<<mo<<endl;

} 
