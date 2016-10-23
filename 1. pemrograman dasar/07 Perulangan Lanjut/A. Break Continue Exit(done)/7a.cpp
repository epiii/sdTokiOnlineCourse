#include <iostream>

int main(){
	int bil;
	bool valid;
	do{
		cout<<"masukkan bilangan : ";
		cin>>bil;
		if(bil>50){
			cout<<">> range 1-50\n";
			valid=false;
		}else{
			valid=true;
			for(int i=1;i<=bil;i++ ){
				if(i==10) continue;
				else if(i==42) {
					cout<<"Error"<<endl;
					break;
				}else cout<<i<<endl;
			}
		}
	}while(!valid);
	return 0;
}
