#include <iostream>

int main(){
	int bil,bil2;
	bool valid;
	do{
		cout<<"masukkan bilangan :";
		cin>>bil>>bil2;
		if(bil>100 || bil<1){
			cout<<">> range antara 1 s/d 100\n";
			valid=false;
		}else{
			valid=true;
			int counter =1;
			while(counter<=bil){
				if(counter%bil2==0) cout<<"* ";
				else cout<<counter<<" ";
				counter++; 
			}
		}
	}while(!valid);
	return 0;	
}