
#include <iostream>

using namespace std;

int main(){
    float precio = 0;
    cout<<"escriba el precio del producto"<<endl;cin>>precio;
    float viva = 0.19;
    float iva = precio * viva;
    float fvalor = iva + precio;
    cout<<"el precio mas el iva es"<<endl<<fvalor;

    return 0;
}
