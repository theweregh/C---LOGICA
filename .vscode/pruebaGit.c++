#include <iostream>
using namespace std;
int main(){
    int c,ne,i,n,v[3],c,p1,p2,p3,sp,n1,n2,n3;
    cout<<"ingrese numero de estudiantes ";cin>>ne;
    cout<<"ingrese el promedio 1";cin>>p1;
    cout<<"ingrese el promedio 2";cin>>p2;
    cout<<"ingrese el promedio 3";cin>>p3;
    while(c<ne){
    for(i=0;i<3;i++){
        cout<<"ingrese las notas ";cin>>n;
        v[i]=n;
    }
    //sp=n1*p1+n2*p2+n3*p3;
    pn1=v[0]*p1;
    pn1=v[1]*p2;
    pn1=v[3]*p3;
    pte=pn1+pn2+pn3;
    for(p=0;p<3;p++){
        p[p]=pte;
        pt+=pte;
    }
    
    }
    return 0;
}