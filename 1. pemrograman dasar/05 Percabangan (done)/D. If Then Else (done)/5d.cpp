#include <iostream> 
using namespace std;

int main(){
	bool validNum;
	do{
		int n;
		cout<<"masukkan bilangan bulat  :";
		cin>>n;
		if(n>100000 | n<-100000) {
			cout<<"masukkan bilangan antaran -100000 s/d 100.000";
		}else{
			if(n==0) cout<<n<<" bilangan nol";
			else if(n<0) cout<<n<<" bilangan positif";
			else cout<<n<<" negatif";
		}
	}while(!validNum);
	return 0;
}