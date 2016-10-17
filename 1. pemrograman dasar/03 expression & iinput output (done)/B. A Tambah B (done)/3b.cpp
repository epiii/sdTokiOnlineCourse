#include <iostream>
using namespace std;

int main(){
	int a,b;
	bool validNum;
	do{
		cout<<"jumlah bebek, jantan <spasi> betina(contoh: 70 2):";
		cin>>a>>b;
		if(a>100 || a<1 || b>100 ) {
			validNum=false; 
			cout<<">> bilangan hanya antara 1 s/d 100 !!!\n"<<endl;
		}else validNum=true; 
	}while(!validNum);
	cout<<"total Bebek = "<<a+b;
	return 0;
}
