#include <iostream>

int main(){
	int jum;
	bool valid;
	do{
		cout<<"masukkan jumlah bilangan :";
		cin>>jum;
		if(jum>100){
			valid=false;
			cout<<">> max 100\n";
		}else{
			int counter =1;
			cout<<"masukkan bilangan (sebanyak "<<jum<<"):";
			int max=0,min=0;
			while(counter<=jum){
				int bil;
				cin>>bil; 

				if(bil>max) max=bil; 
				if(bil<min) min=bil; 
				counter++; 
			}
			cout<<"max: "<<max<<" ";
			cout<<"min: "<<min;
		}
	}while(!valid);
	return 0;	
}