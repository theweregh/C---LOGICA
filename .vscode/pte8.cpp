//pte= promedio total estudiante
#include <iostream>
using namespace std;
int main(){
    int c,ne,i,n,k,a,j,cn;
    cout<<"ingrese la cantidad de notas: ";cin>>cn;
    float p,pt,v[cn], pro[cn],pte[cn];
    
    for(k=0;k<cn;k++){
            cout<<"ingrese el promedio "<<k+1<<": ";cin>>pro[k];
    }
    cout<<"ingrese numero de estudiantes: ";cin>>ne; 
    float pti[ne];
    for(c=0;c<ne;c++){
        for(i=0;i<cn;i++){
            cout<<"ingrese la nota "<<i+1<<" del estudiante "<<c+1<<": ";cin>>n;
            v[i]=n*pro[i]/100;
            pte[i]=v[i];
        }
        //for(j=0;j<3;j++){
        //    pte[j]=v[i];
        //}
        //estuve modificando el for de abajo pq el promedio no me da :(
        for(a=0;a<c;a++){
            pti[a]+=pte[a];
            if(a==c){
                pt+=pti[a]/ne;
            }
        }
        //for(j=0;j<ne;j++){
            //pt+=pti[j]/ne;
            //cout<<"pt"<<pt<<endl;
            //}
        
    }
    for(i=0;i<ne;i++){
        cout<<"el promedio del estudiante "<<i+1<<": "<<pti[i]<<endl;
    }
    //pt/=ne;
    cout<<"el promedio total es: "<<pt;
    return 0;
}
