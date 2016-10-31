#include <iostream>
#include <string>

void cek(int x){
	int counter=0;
	for (int i =1; i<=x; i++){
		if(x%i==0) counter++;
	} cout<<(counter==2?"iya":"bukan")<<endl;
}
int main(){
	int bil;
	cout<<"masukkan bil :";
	cin>>bil;

	for (int i =1; i<=bil; i++){
		cout<<i<<endl;
	}
	
	cout<<"hasil :\n";
	for (int i =1; i<=bil; i++){
		cek(i);
	}return 0;
}
