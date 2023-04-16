#include<iostream>
using namespace std;
int main(){
    int tamaño,n,i,j,aux,c,numero;
    cout<<"ingrese el tamaño de la array ";cin>>tamaño;
    int numeros[tamaño];
    for(c=1;c<tamaño;c++){
        cout<<"ingrese los numeros ";cin>>n;
        numeros[nm]=n;
    }
    for(i=0;i<c;i++){
        for(j=0;j<c;j++){
            if(numeros[j] > numeros[j+1]){
                aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
            }
        }
    }
    return 0;
}