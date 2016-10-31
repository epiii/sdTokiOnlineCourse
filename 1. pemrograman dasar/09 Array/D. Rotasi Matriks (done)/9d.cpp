#include <iostream>

int main(){
	int m,n;
	cout<<"masukkan ordo m x n :";
	cin>>m>>n;

	int mat[100][100];
	for (int i = 0; i < m; i++){
		for(int j=0; j<n; j++){
			cin>>mat[i][j];
		}
	}cout<<"\ncetak:\n"; // m x n = 4 x 3 
	for (int i = 0; i<=n-1; i++){ 
		for(int j=m-1; j>=0; j--){
			cout<<mat[j][i]<<" ";
		}cout<<endl;
	}return 0;
}
/*
m x n
4 x 3

1 2 3
4 5 6
7 8 9
10 11 12

10 7 4 1
11 8 5 2
12 9 6 3

index
30 20 10 00
31 21 11 01 
32 22 12 02 

*/