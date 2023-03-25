#include<iostream>

using namespace std;

int main()
{
    int vlr,cd,b50,b20,b10;
    cout<<"digite el valor a retirar ";cin>>vlr;
    while (vlr>0){
        cd=1;

        while (vlr%10!=0 && cd<3){
            cout<<"digite el valor que desea retirar ";cin>>vlr;
            cd=cd+1;
            
        
    }

    
    if (vlr%10==0){

        b50=(vlr/50);
        b20=(vlr%50)/20;
        b10=((vlr%50)%20)/10;
        cout<<b50<<b20<<b10;
    }
    else{
        cout<<"le quedo mal\n";
    }
    cout<<"\ndigite el valor que desea retirar ";cin>>vlr;
    
    }
    
    return 0;
}
