#include <iostream> 
#include <string> 
using namespace std;

int main(){
	int counter=0;
	string kal;
	string kalArr[100];
	do{
		cout<<"masukkan kalimat  :";
		cin>>kal;

		kalArr[counter]=kal;
		counter++;
	}while(kal!="N");

	for (int i = 0; i < counter; ++i){
		cout<<"\n"<<kalArr[i]<<endl;
	}
	return 0;
}
