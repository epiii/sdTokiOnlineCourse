#include <iostream> 
using namespace std;

int main(){
	bool validNum;
	do{
		int n;
		cout<<"masukkan jumlah kandang :";
		cin>>n;
		cout<<endl;
		if(n>1000 | n<-1000) {
			cout<<"masukkan bilangan antaran -1000 s/d 1000";
		}else{
			int bil=0;
			for (int i = 1; i <=n; ++i){
				bil+=i;
			}

			cout<<"\ncetak jumlah bebek per kandang :";
			for (int i = 1; i <=n; ++i){
				cout<<i<<" ";
			}cout<<"\ncetak jumlah :"<<bil;
		}
	}while(!validNum);
	return 0;
}
