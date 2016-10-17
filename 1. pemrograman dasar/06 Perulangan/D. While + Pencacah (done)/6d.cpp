#include <iostream> 
#include <string> 
using namespace std;

int main(){
	int bil, bilTot=0;
	do{
		cout<<"masukkan bilangan :";
		cin>>bil;
		if(bil>0) { // negatif berhenti (-1)
			bilTot=bilTot+bil;
		}
	}while(bil>0);
	cout<<"total :"<<bilTot;
	return 0;
}
