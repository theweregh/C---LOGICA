/* numero par o impar 230202
programa que permita determinar si un numero determinado por el usuario es par o impar
*/
#include <iostream>
using namespace std;
int main()
{
    int n,f;
    cout<<"Ingrese un numero ";cin>>n;
    while (n!=0){
        f=n%2;
    if (f==0){
        cout<<"par"<<endl;
    }
    else{
        cout<<"impar"<<endl;
    }
    cout<<"Ingrese un numero ";cin>>n;
    }
    return 0;
}