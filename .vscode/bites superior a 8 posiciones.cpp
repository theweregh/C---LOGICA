//bites 8 posiciones , asqui no va a ser mayor a 256
#include <iostream>
using namespace std;
int main()
{
    int c=7,L=255,n,i,v,r,b[8];
    for(i=0;i<8;i++){
        b[i]=0;
    }
    do{
        cout<<"ingrese un numero ";cin>>n;
        
    }while(n>L && n<1);
    v=n;
    do{
        r=v%2;
        v=v/2;
        b[c]=r;
        c-=1;
    }while(v>1);
    b[c]=v;
    //cout<<n<<"=";
    for(i=0;i<8;i++){
        cout<<"el vector "<<i<<" "<<b[i]<<" "<<endl;
    }
    return 0;
}
