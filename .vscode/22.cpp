//descompone el decimal en binarios
#include <iostream>
using namespace std;
int main(){
    int n,f,r;
    cout<<"ingrese n";cin>>n;
    f=n;
    while(f>1){
        r=f%2;
        f=int(f/2);
        cout<<r<<endl;
    }
    cout<<f;
    return 0;
}