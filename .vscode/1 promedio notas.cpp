/*1
promedio de notas
*/
#include<iostream>
using namespace std;
int main(){
    int q1,p,q2,l,e,s,d;
    cout<<"ingrese las notas "<<endl;
    cin>>q1;
    cin>>p;
    cin>>q2;
    cin>>l;
    cin>>e;
    s= q1+p+q2+l+e;
    d= s/5;
    cout<<" la definitiva es "<<d;
}