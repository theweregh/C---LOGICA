/*27/04/23 
produccion de leche por cada vaca vaca que mas leche produjo leche menos produjo promedio diaria de leche
suma de leche diaria el peso promedio de la vacas 
*/ 
#include <iostream>
using namespace std;
int main(){
    int cv,sl,sp,pl,pp,i,c,menor,mayor=0,menorl,mayorl;
    cout<<"ingrese el numero de vacas ";cin>>cv;
    int l[cv],p[cv];
    //vector de leche y peso
    for(i=0;i<cv;i++){
        cout<<"ingrese la cantidad de leche para la vaca "<<i+1;cin>>l[i];
        cout<<"ingrese la cantidad de peso para la vaca "<<i+1;cin>>p[i];
        sl+=l[i];
        sp+=p[i];
        if(i==0){
            menor=l[i];
            menorl=i;
        }
        else{
            if(menor>l[i]){
                menor=l[i];
                menorl=i;
        }
        }
        if(mayor<l[i]){
            mayor=l[i];
            mayorl=i;
        }
    }
    pl=sl/cv;
    pp=sp/cv;
    cout<<"promedio leche "<<pl<<endl;
    cout<<"promedio peso "<<pp<<endl;
    cout<<"menor produccion leche de la vaca "<<menorl+1<<" es "<<menor<<endl;
    cout<<"mayor produccion leche de la vaca "<<mayorl+1<<" es "<<mayor<<endl;
    
    return 0;
}