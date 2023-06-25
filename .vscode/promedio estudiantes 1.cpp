//pte= promedio total estudiante
#include <iostream>
using namespace std;
int main(){
    int c,ne,i,n;
    float p1,p2,p3,pte=0,pt,v[3];
    cout<<"ingrese p1: ";cin>>p1;
    cout<<"ingrese p2: ";cin>>p2;
    cout<<"ingrese p3: ";cin>>p3;
    cout<<"ingrese numero de estudiantes: ";cin>>ne;
    for(c=0;c<ne;c++){
        for(i=0;i<3;i++){
            cout<<"ingrese un numero: ";cin>>n;
            switch(i){
            case 0:
            v[i]=n*p1/100;
            break;
            case 1:
            v[i]=n*p2/100;
            break;
            case 2:
            v[i]=n*p3/100;
            break;
            }
            pte+=v[i];
        }
        cout<<"el promedio del estudiante es:"<<pte<<endl;
        pt+=pte;
    }
    pt/=c;
    cout<<"el promedio total es: "<<pt;
    return 0;
}
