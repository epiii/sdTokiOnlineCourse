#include <iostream>

int main(){
	bool valid;
	do{
		int bil;
		cout<<"masukkan bil :";
		cin>>bil;
		if(bil<1 || bil>100){
			cout<<"range antara 1 sd 100.000\n";	
			valid=false;
		} 
		else{
			valid=true;
			int x[bil];
			for (int i = 1; i <=bil; i++){
				cin>>x[i];
			}

			cout<<"\ncetak\n";
			for (int j = bil; j >=1; j--){
				cout<<x[j]<<endl;
			}
		}
	}while(!valid);
	return 0;
}