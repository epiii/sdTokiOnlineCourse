#include <iostream> 
#include <math.h> 
using namespace std;

int main(){
	int  bil, bilPangkat, bilAkar;
	cout<<"masukkan bilangan  :";
	cin>>bil;
	// cout<<log2(bil);
	int mod;
	int sisa;
	int pangkat=1;
	bool isPangkatDua;
	sisa=bil;
	
	while(sisa>0){
		sisa/=2; // 4,
		cout<<"\n\nsisa awal ="<<sisa;
		mod=sisa%2; // 0
		cout<<"\nmod dari sisa ="<<mod;
		if(mod>0) {
			isPangkatDua=false;
			break;
		}else{
			cout<<"\ndibagi 2 sisa="<<sisa;
			pangkat++;
		}
	}
	cout<<"\nhasil akhir :"<<(isPangkatDua?"ya":"bukan");
	return 0;
}


// int main(){
// 	int bil;
// 	int x;
// 	cout<<"masukkan bilangan:";
// 	cin>>bil;
	
// 	x=log2(bil);
// 	cout<<x;
// }