#include <iostream>

int main(){
	int bil;
	bool valid;
	do{
		cout<<"masukkan bilangan : ";
		cin>>bil;
		if(bil>50){
			cout<<">> range 1-100\n";
			valid=false;
		}else{
			valid=true;
			for(int i=1;i<=bil;i++ ){
				for(int j=1;j<=bil-i;j++ ){
					cout<<" ";
				}
				for(int k=1;k<=i-1;k++ ){
					cout<<"*"; // untuk baris pertama tidak tercetak
				}cout<<"*"<<endl;	
			}
		}
	}while(!valid);
	return 0;
}
