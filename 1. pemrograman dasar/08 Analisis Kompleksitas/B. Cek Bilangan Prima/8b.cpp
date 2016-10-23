#include <iostream>

int main(){
	int bil;
	cout<<"masukkan bil :";
	cin>>bil;

	int counter=0;
	for (int i = bil-1; i >=1; i--){
		if(bil%i==0){
			counter++;
		}

		if(counter>1) {
			cout<<"bukan";
			break;
		}else{
			cout<<"iya";
			break;
		} 
		
	}
	return 0;

	// int i,j,c;
	// cout<<"Bilangan Prima Antara 1-100 :\n\n";
	// for(i=1;i<=100;i++){
	// int bil;
	// cout<<"masukkan bil :";cin>>bil;
	// 	c=0;
	// 	for(j=1;j<=bil;j++){
	// 		if(bil%j==0){
	// 			c=c+1;
	// 		}
	// 	}
	// 	cout<<c;
		// if (c==2) cout<<bil<<" ";
	// }
	return 0;
}
