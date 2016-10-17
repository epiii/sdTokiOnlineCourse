#include <iostream>
#include <string>
// #include <conio>
using namespace std;

int main(){
	char kal[100];
	// string kal;
	cout<<"masukkan kalimat : ";
		cin>>kal;

	// int n=kal.length();
	int n=strlen(kal);
	// cout<<"jumlah hurug : "<<n;
	cout<<"jumlah huruf : "<<n<<endl;
	cout<<"cetak kalimat : "<<kal;
	return 0;
}
