//pte= promedio total estudiante
#include <iostream>
using namespace std;
int main(){
    int c,ne,i,n,k;
    float p,pt,v[3];float pro[3];
    for(k=0;k<3;k++){
            cout<<"ingrese p: ";cin>>pro[k];
    }
    cout<<"ingrese numero de estudiantes: ";cin>>ne;
    for(c=0;c<ne;c++){
        float pte=0;
        for(i=0;i<3;i++){
            cout<<"ingrese una nota: ";cin>>n;
            v[i]=n*pro[i]/100;
            pte+=v[i];
        }
        cout<<"el promedio del estudiante es:"<<pte<<endl;
        pt+=pte;
    }
    pt/=c;
    cout<<"el promedio total es: "<<pt;
    return 0;
}
