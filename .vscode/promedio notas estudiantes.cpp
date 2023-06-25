#include <iostream>
using namespace std;
int main(){
    int c,ne,n,m,otro,nt;
    otro=1;
    while(otro==1){
    c=0;
    nt=0;
    cout<<"ingrese el numeros de estudiantes a sacar la media de las notas ";cin>>ne;
    while(ne>0){
        cout<<"ingrese la nota ";cin>>n;
        nt=nt+n;
        ne=ne-1;
        c=c+1;
    }
    m=nt/ne;
    cout<<"la media de las notas es "<<m<<endl;
    cout<<"si quiere continuar ingrese 1 de lo contrario otro numero ";cin>>otro;
    }
    return 0;
}