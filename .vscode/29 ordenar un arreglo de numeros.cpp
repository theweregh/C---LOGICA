//29 ingrese un arreglo de numeros metodo burbuja
#include <iostream>
using namespace std;
int main(){
    int c,n,i,j,k,t,spn;
    cout<<"ingrese la cantidad de poiciones ";cin>>c;
    int vct[c];
    for (i=0;i<c;i++){
        cout<<"ingrese n["<<i<<"]";cin>>vct[i];
    }
    cout<<"vector ingresado ";
    for(k=0;k<c;k++){
        cout<<vct[k]<<" ";}
    cout<<endl;
    for (i=0;i<c-1;i++){
        for (j=i+1;j<c;j++){
            if(vct[i]>vct[j]){
                t=vct[i];
                vct[i]=vct[j];
                vct[j]=t;
            }
        }
    }
    cout<<"\n vector ordenado ";
    for (k=0;k<c;k++){
        cout<<vct[k]<<" ";
    }
    return 0;
}