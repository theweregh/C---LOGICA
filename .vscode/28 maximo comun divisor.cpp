/* 2023/03/16 Maximo comun divisor
*/
#include<iostream>
using namespace std;
int main(){
int a,b,n,c;int r=1;int j=0;int i=1;
cout<<"ingrese un numero para a: ";cin>>a;
cout<<"ingrese un numero para b: ";cin>>b;
if(a<b){ 
    n=a;
}
else{
    n=b;
} 
while((a>i)&&(b>c)&&(i<n)){
    c=i;
    while((a%i==0) && (b%i==0)){
    if(c<n/2){
        a/=i;
        b/=i;
        r*=i;
    }
    c+=1;j+=1;
    }
    i+=1;
}
cout<<"el resultado del maximo comun divisor es: "<<r<<endl;
return 0;
}