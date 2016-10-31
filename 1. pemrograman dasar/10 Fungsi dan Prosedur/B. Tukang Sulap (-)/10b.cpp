#include <iostream>

int main(){
	int bolaArr[100][100];
	char bolaArr2[100][100];
	int nBil;
	int nBil2;
	cout<<"masukkan jumlah bil :";
	cin>>nBil;
	for (int i =1; i <=nBil; ++i){
		for (int j =1; j <=nBil; ++j){
			cin>>bolaArr[i][j];
		}
	}
	cout<<"masukkan jumlah bil ke-2 :";
	for (int i =1; i <=nBil; ++i){
		for (int j =1; j <=nBil; ++j){
			cin>>bolaArr2[i][j];
		}
	}

	for(int k=1;k<=nBil;k++){
		for(int l=1;l<=nBil;l++){
			cout<<bolaArr[k][l]<<" ";
		}cout<<endl;
	}
	return 0;
}
