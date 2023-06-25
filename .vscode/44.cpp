#include <iostream>//20230420 44 factorial y divisores con funciones
using namespace std;
//cntsdvs=cantidad divisores
int getcntdvs(int A){//tipada
    int C=A/2, cntdvs=0;//C=numero/2
    for (int i=1;i<=C;i++)
    if(A%i==0){
        cntdvs++;
    }
    return cntdvs;
}
//nf=numero a sacarle el factorial
void getfactorial(int nf){//no tipada
    int i,f=1;//f=factorial
    for(i=2;i<=nf;i++){
        f*=i;
    }
    cout<<f;
}
int main()
{
    int D,x,R,otro=1;
    while(otro==1){
        cout<<"ingrese 1 para buscar un numero primo o 2 su quiere el factorial de un #\n";cin>>D;
        cout<<"inserte el numero a trabajar\n";cin>>R;
        switch(D){
            case 1: x=getcntdvs(R);
            if(x<2) cout<<"su numero es primo\n";
            else cout<<"su numero no es primo\n";
            break;
            case 2: getfactorial(R);break;
            default:cout<<"usted ha ingresado una opcion incorrecta\n";
        }
        cout<<"digite 1 si quiere repetir\n";
    }
    cout<<"fin del programa\n";
    return 0;
}
