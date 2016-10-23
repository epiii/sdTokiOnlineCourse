#include <iostream> 
using namespace std;

int main(){
	int bil, 
		counter=1,
		bilTot=0,
		maxLoop=100,
		maxDigit=1000;
	bool lanjutkan=true;
	cout<<"* Untuk berhenti ketik : (-1 atau 1001)\n";

	do{
		cout<<"masukkan bilangan ke-"<<counter<<": ";
		cin>>bil;
		
		if(counter>maxLoop){ // > 100
			cout<<">> melebihi batasan (max "<<maxLoop<<"x bilangan)";
			lanjutkan=false;
		}else{
			if(bil<1 || bil>maxDigit){
				cout<<">> Batasan bilangan antara : 1-"<<maxDigit<<" \n";
				lanjutkan=false;
			}else bilTot+=bil;
		}counter++;
	}while(lanjutkan);
	cout<<"\ntotal :"<<bilTot;
	return 0;
}