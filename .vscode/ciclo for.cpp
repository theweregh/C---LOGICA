#include <iostream>
using namespace std;
int main()
{
    int M,A,B,F,C;
    F=0;A=0;B=1;F=1;C=2;
    cout<<"ingrese M ";cin>>M;
    cout<<"F es: "<<A<<endl<<"F es: "<<B<<endl;
    for (int i=2; i<=M;i+=1){
        cout<<"F es: "<<F<<endl;
        A=B;B=F;
        F=A+B;
    }
    return 0;
}