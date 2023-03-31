#include <iostream>
using namespace std;
int main()
{
    int M,A,B,F;
    F=0;B=1;F=1;
    cout<<"ingrese M ";cin>>M;
    while(F<=M){
        cout<<"F es: "<<F<<endl;
        F=A+B;
        A=B;B=F;
    }
    return 0;
}
