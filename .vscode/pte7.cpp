//pte= promedio total estudiante
#include <iostream>
using namespace std;
int main(){
    int c,ne,i,n,k,a,j;
    float p,pt,v[3], pro[3],pte[3];
    for(k=0;k<3;k++){
            cout<<"ingrese el promedio "<<k+1<<": ";cin>>pro[k];
    }
    cout<<"ingrese numero de estudiantes: ";cin>>ne; 
    float pti[ne];
    for(c=0;c<ne;c++){
        for(i=0;i<3;i++){
            cout<<"ingrese la nota "<<i+1<<" del estudiante "<<c+1<<": ";cin>>n;
            v[i]=n*pro[i]/100;
            pte[i]=v[i];
        }
        //for(j=0;j<3;j++){
        //    pte[j]=v[i];
        //}
        for(a=0;a<=c;a++){
            pti[a]=pte[0]+pte[1]+pte[2];
            if(a==c){
            pt+=pti[a]/ne;
            //cout<<"pt"<<pt<<endl;
            }
        } 
    }
    for(i=0;i<ne;i++){
        cout<<"el promedio del estudiante "<<i+1<<": "<<pti[i]<<endl;
    }
    //pt/=ne;
    cout<<"el promedio total es: "<<pt;
    return 0;
}