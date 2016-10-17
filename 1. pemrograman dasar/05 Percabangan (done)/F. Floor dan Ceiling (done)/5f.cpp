#include <iostream> 
#include <math.h> 
using namespace std;

int main(){
	bool validNum;
	do{
		double  n;
		cout<<"masukkan bilangan :";
		cin>>n;
		if(n>100000 | n<-100000) {
			cout<<"masukkan bilangan antaran -100000 s/d 100.000";
		}else{
			 cout<<" ceil :"<<ceil(n)<<" , floor:"<<floor(n);
		}
	}while(!validNum);
	return 0;
}
