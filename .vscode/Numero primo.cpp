#include <iostream>
using namespace std;
int main(){
	int N, CNT=2, NTR=1;
	cout<<"PORFAVOR INGRESE UN NUMERO: "; cin>>N;
	while(CNT<N&&NTR!=0){
		if(CNT==N){
			CNT=CNT+1;
		}
		else{
			NTR=N%CNT;
			CNT=CNT+1;
		}
		if(NTR==0){
			cout<<"ES UN NUMERO PRIMO."<<endl;
		}
		else{
			cout<<"NO ES UN NUMERO PRIMO."<<endl;
		}
	}
}