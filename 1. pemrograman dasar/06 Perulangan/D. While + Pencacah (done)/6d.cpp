#include <iostream> 
#include <string> 
using namespace std;

// int main(){
// 	int bil, bilTot=0;
// 	bool lanjutkan=true;
// 	do{
// 		cout<<"masukkan bilangan :";
// 		cin>>bil;
// 		if(bil>=1 & bil<=1000) { // negatif berhenti (-1)
// 			bilTot=bilTot+bil;
// 		}else {
// 			lanjutkan=false;
// 			cout<<"Batasan bilangan antara : 1-1000";
// 		}
// 	}while(lanjutkan);
// 	cout<<"\ntotal :"<<bilTot;
// 	return 0;
// }

int main(){
	int bil, 
		counter=1,
		bilTot=0,
		max=4;
	bool lanjutkan=true;
	do{
		cout<<"masukkan bilangan :";
		cin>>bil;
		if(counter<max){ //<100
			if(bil>=1 & bil<=1000) { // negatif berhenti (-1)
				bilTot+=bil;
			}else {
				lanjutkan=false;
				cout<<"Batasan bilangan antara : 1-1000";
			}
		}else { //>100
			cout<<"melebihi batasan (max "<<max<<"x inputan)";
			lanjutkan=false;
		}counter++;
	}while(lanjutkan);
	cout<<"\ntotal :"<<bilTot;
	return 0;
}