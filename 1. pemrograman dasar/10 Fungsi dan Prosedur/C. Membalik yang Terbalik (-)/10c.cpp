#include <iostream>
// #include <string>
 
using namespace std;

int main(){
	string bil1;
	cout<<"masukkan bilangan :";
	// cin>>bil1;
	// cout<<(bil1.length());
	// string b;
	// for(int i=1;i<=bil1.length();i++){

	// }
	// reverse(begin(bil1),end(bil1));
	// cout<<bil1[0]<<" "<<bil2[0];
	  // cout<<"masukan angka yg akan di balik angkanya : ";
    cin>>n;
    dibalik=0;
    while(n>0)
    {
        dibalik=(dibalik*10)+(n%10);
        n/=10;
    }
 
    cout<<dibalik;
	return 0;
}