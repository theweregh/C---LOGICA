#include <iostream>
using namespace std;
int main()
{
    int u,i,s1,s2,p1,p2;
    
    double pE[]={40,40,20},sE[]={20,20,50};
    for(u=0;u<3;u++){
        s1+=pE[u];
    }
    for(i=0;i<3;i++){
        s2+=sE[i];
    }
    p1=s1/3;
    p2=s2/3;
    cout<<"el promedio del e1 es:"<<p1<<endl;
    cout<<"el promedio del e2 es:"<<p2<<endl;
    return 0;
}
