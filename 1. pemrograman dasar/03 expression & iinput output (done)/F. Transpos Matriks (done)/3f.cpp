#include <iostream>
#define max 100
using namespace std;

 int main()
{
	int m[max][max];
	cout<<"input element matriks (3x3) : \n";
	int n =3;
	for (int i =0; i <n; i++){
		for (int j =0; j <n; j++){
			cin>>m[i][j];
		}
	}

	cout<<"matriks transpose :\n";
	for (int i =0; i<n; i++){
		for (int j =0; j<n; j++){
			cout<<m[j][i]<<" ";
		}cout<<"\n";
	}

	return 0;
}

/*
1 2 3
4 5 6
7 8 9
*/