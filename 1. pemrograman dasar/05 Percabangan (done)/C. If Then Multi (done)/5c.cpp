#include <iostream> 
using namespace std;

int main(){
	bool validNum;
	do{
		int n;
		cout<<"masukkan bilangan bulat positif :";
		cin>>n;
		if(n>100000 | n<0) {
			cout<<"masukkan bilangan antaran 0 s/d 100.000";
		}else{
			if(n%2==0) cout<<"bilangan bulat:"<<n;
		}
	}while(!validNum);
	return 0;
}
