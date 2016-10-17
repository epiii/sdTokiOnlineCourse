#include <iostream>
using namespace std;

 int main()
{
	int a,b;
	bool validNum;
	do{
		int a,b,tot,masing,sisa;
		cout<<"input jumlah masing-masing bebek : ";
		cin>>a>>b;

		tot=a+b;
		if(a>100000 || a<1 || b>100000 || b<1 ) {
			validNum=false; 
			cout<<">> bilangan hanya antara 1 s/d 100.000 !!!\n"<<endl;
		}else {
			validNum=true; 
			masing=tot/2;
			sisa=tot%2;
			cout<<"\nmasing-masing : "<<masing<<endl;
			cout<<"bersisa: "<<sisa;
		}
	}while(!validNum);
	return 0;
}