//suma y ordena numeros
#include <iostream>
using namespace std;
int main()
{
    int otro=1,s=0,l=3,n,q,w,c;
    do{
        cout<<"ingrese q ";cin>>q;
    }while(q>l or q<1);
    int v[q];
    for(c=0;c<q;c++){
        cout<<"ingrese un numero ";cin>>n;
        s+=n;
        v[c]=n;
    }
    cout<<"la suma es "<<s<<endl;
    cout<<"q es "<<q<<endl;
    for(w=0;w<q;w++){
        cout<<w+1<<". "<<v[w]<<endl;
    }
    return 0;
}