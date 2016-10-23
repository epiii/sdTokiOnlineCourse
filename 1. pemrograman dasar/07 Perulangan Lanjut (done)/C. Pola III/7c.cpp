#include <iostream>

int main(){
	int bil;
	bool valid;
	do{
		cout<<"masukkan bil :";
		cin>>bil;
		if(bil>100||bil<1){
			cout<<"range antara 1-100\n";
			valid=false;
		}else {
			valid=true;
			for (int i = 0; i <bil; ++i){
				for (int j = 0; j <=i; ++j){
					cout<<i+i;
				}cout<<endl;
			}
		} 
	}while(!valid);
	return 0;
}