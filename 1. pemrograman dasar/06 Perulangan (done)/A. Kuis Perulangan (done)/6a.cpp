#include <iostream> 
#include <math.h> 
using namespace std;

int main(){
	bool validNum;
	do{
		int x1,y1,x2,y2, jarak ;
		cout<<"masukkan koordinat (x1,y1) (x2,y2) :";
		cin>>x1>>y1>>x2>>y2;
		if(x1>100000 | x1<-100000) {
			cout<<"masukkan bilangan antaran -100000 s/d 100.000";
		}else{
			jarak=abs(x1-x2)+abs(y1-y2);
			cout<<"jarak :"<<jarak;
		}
	}while(!validNum);
	return 0;
}
