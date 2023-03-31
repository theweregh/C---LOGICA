#include <iostream>
using namespace std;
int main()
{
    int vlr=0,vrlt=0;
    cout<<"Digite el valor a retirar";cin>>vlr;
    while(vlr==0)cout<<"vuelta a Digitar el valor a retirar";cin>>vlr;
    if(vlr!=0){
        int b50=  (vlr/50);
        int b20= (vlr%50)/20;
        int b10= ((vlr%50)%20)/10;
        int vlrt= (b50+b20+b10);
    }
    cout<<vrlt;
    cout<<vlr;
    return 0;
}
