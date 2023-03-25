#include <iostream>

using namespace std;

int main()
{
    int nmr,m2,m3,m5,p,n,sm,sm1,sm2,smn,p1,p2,p3,p4;
   
   
    cout<<"escriba un numero "<<endl;cin>>nmr;
    while (nmr>0){
        if (nmr%3==0){
            cout<<"el numero es multiplo de 3 "<<endl;
            m3=m3+1;
            sm=sm+nmr;
        }
        else{
            cout<<"el numero no es modulo de 3 "<<endl;
        }
        if (nmr%5==0){
            cout<<"el numero es multiplo de 5 "<<endl;
            m5=m5+1;
            sm1=sm1+nmr;
        }
        else{
            cout<<"el numero no es multiplo de 5 "<<endl;
           
        }
        if (nmr%5==0 && nmr%3==0){
            cout<<"el numero  es multiplo de 5 y 3 "<<endl;
            m2= m2+1;
            sm2=sm2+nmr;
        }
        else{
            cout<<"el numero no es multiplo de 5 y 3 "<<endl;
            n=n+1;
            smn=smn+nmr;
        }
       
       
        cout<<"\nescriba un numero "<<endl;cin>>nmr;
       

       
    }
    p1=sm/m3;
    p2=sm1/m5;
    p3=sm2/m2;
    p4=smn/n;
    cout<<"los promedios son "<<endl;
    cout<<p1<<endl;
    cout<<p2<<endl;
    cout<<p3<<endl;
    cout<<p4<<endl;
    return 0;
}
