#include <iostream>
using namespace std;
int set(int a){
    return (a*2);
}
int main(){
    int num1,m;
    cout<<"ingrese un numero ";cin>>num1;
    m = set(num1);    
    cout<<"el resultado es: "<<m;
    return 0;
}
