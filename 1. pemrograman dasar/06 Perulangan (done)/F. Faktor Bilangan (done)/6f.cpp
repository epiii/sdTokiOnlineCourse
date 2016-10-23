
#include <iostream>

using namespace std;

int main(){
	int bil;
	cout<<"masukkan bilangan :";
	cin>>bil;
	if(bil>1000000) cout<<"bilangan max 1000.000";
	else{
		int counter=bil;
		while(counter>0){
			if(bil%counter==0) cout<<counter<<endl;

			counter--;
		}
	}return 0;
}