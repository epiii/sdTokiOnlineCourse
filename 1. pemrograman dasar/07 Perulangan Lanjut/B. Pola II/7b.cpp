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
				for(int j=1;j<=bil;j++ ){
					if(j<i) cout<<" ";
					else cout<<"*";
				}cout<<endl;	
			}
		}
	}while(!valid);
	return 0;
}
