#include <iostream>

int main(){
	int x1=3,y1=3;
	int x2=3,y2=4;

	int matA[100][100];
	int matB[100][100];
	int matC[100][100];

	cout<<"masukkan matrix A:\n";
	for (int i = 0; i <x1; i++){
		for(int j=0; j<y1; j++){
			cin>>matA[i][j];
		}
	}
	cout<<"masukkan matrix B:\n";
	for (int i = 0; i <x2; i++){
		for(int j=0; j<y2; j++){
			cin>>matB[i][j];
		}
	}
	cout<<"\nhasil:\n"; // m x n = 4 x 3 
	for (int i=0; i<x1; i++){ 
		for(int j=0; j<y2; j++){
			matC[i][j]=0;
			// cout<<i<<j<<" ";
			for(int z=0; z<y2; z++){
				cout<<i<<j<<" ";
				matC[i][j]+=matA[i][j]*matB[i+1][j];
			}
			// cout<<matC[i][j]<<" ";
		}cout<<endl;
	}


	return 0;
}
/*
n x m = 3 x 3
m x p = 3 x 4

n x p = 3 x 4

2 3 4
1 1 1
1 1 2

1 1 1 1
1 1 1 1
1 1 1 2

*/