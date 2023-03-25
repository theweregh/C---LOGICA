#include <iostream>
using namespace std;
int main(){
    /*
    m= numero para sacarle el factorial
    */
    int a,b,m,c,f,cP,nPrimo;
    cout<<"ingrese la calculadora que desea utilizar [1]para calcular el fibonacci [2]para numero primo";cin>>cP;
    while(cP<6 && cP>0){
        switch(cP){
            case 1:
                cout<<"ingrese la cantidad de factoriales que desea ";cin>>m;
                c=2;a=0;b=1;f=1;
                do{
                    cout<<"f es:"<<f<<endl;
                    f=a+b;
                    a=b;
                    b=f;
                    c+=1;
                }while(c<=m);
            break;
            case 2:
                
            
    }
    }
    cout<<"hola";
    return 0;
}