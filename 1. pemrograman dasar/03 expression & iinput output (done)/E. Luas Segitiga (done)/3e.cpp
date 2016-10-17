#include <iostream>
using namespace std;

int main(){
	int a,b;
	bool validNum;
	do{
		int a,t;
		float l;
		cout<<"input alas <spasi> tinggi : ";
		cin>>a>>t;
		if(a>1000 || a<1 || t>1000 || t<1 ) {
			validNum=false; 
			cout<<">> bilangan hanya antara 1 s/d 1.000 !!!\n"<<endl;
		}else {
			validNum=true; 
			l=0.5*a*t;
			cout<<"Luas segitiga :"<<l<<" cm";
		}
	}while(!validNum);
	return 0;
}