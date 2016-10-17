#include <iostream> 
using namespace std;

int main(){
	bool validNum;
	do{
		int n;
		cout<<"masukkan bilangan bulat positif :";
		cin>>n;
		if(n>100000 || n<-100000) {
			cout<<"masukkan bilangan antaran -100.000 s/d 100.000";
		}else{
			if(n>0) cout<<"bilangan bulat:"<<n;
		}
	}while(!validNum);
	return 0;
}
