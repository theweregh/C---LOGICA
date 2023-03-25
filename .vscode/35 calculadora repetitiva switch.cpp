#include <iostream>
using namespace std;
int main()
{
    /*
    a= primer numero
    b= segundo numero
    op= operacion
    r=resultado
    */
    int a,b,op,s,r,otro;
    do{
    cout<<"ingrese un numero ";cin>>a;
    cout<<"ingrese la operacion que desea realizar ";cin>>op;
    while(op>0 && op<6 ){
        cout<<"ingrese otro numero ";cin>>b;
        switch(op){
            case 1:
                a=a*b;
            break;
            case 2:
                a=a-b;
            break;
            case 3:
                a=a*b;
            break;
            case 4:
            while(b==0){
                cout<<"vuelva a escribir b ";cin>>b;
            }
                a=a/b;
            break;
            case 5:
            while(b==0){
                cout<<"vuelva a escribir b ";cin>>b;
            }
                a=a%b;
            break;
        }
        cout<<"ingrese la operacion que desea realizar ";cin>>op;
    }
    cout<<"el resultado es "<<a<<endl;
    cout<<"ingrese 1 para continuar de lo contrario otro numero ";cin>>otro;
    }while(otro==1);

    return 0;
}