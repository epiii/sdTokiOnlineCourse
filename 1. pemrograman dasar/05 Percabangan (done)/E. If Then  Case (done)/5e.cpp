#include <iostream> 
using namespace std;

int main(){
	bool validNum;
	// bool ulang;
	do{
		int n;
		cout<<"\nmasukkan bilangan bulat  :";
		cin>>n;
		if(n>100000 | n<0) {
			cout<<"masukkan bilangan antaran 0 s/d 100.000";
			validNum=false;
		}else{
			validNum=true;
			if(n<10) cout<<n<<": bilangan satuan";
			else if(n<99) cout<<n<<": bilangan puluhan";
			else if(n<999) cout<<n<<": bilangan ratusan";
			else if(n<9999) cout<<n<<": bilangan ribuan";
			else if(n<99999) cout<<n<<": bilangan puluh ribuan";
		}
	}while(!validNum);
	// while(ulang)
	return 0;
}