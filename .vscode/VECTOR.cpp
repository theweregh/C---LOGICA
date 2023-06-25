#include <iostream>
using namespace std;
int main(){
    int otro=1,s=0,c=0,l=10,n,i;
    int v[l];
    while(otro==1 && c<l){
        cout<<"ingrese un numero ";cin>>n;
        s+=n;
        v[c]=n;
        c+=1;
    cout<<"ingrese otro ";cin>>otro;
    }
    cout<<"la suma es "<<s<<endl;
    cout<<"c es "<<c<<endl;
    for(i=0;i<c;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}