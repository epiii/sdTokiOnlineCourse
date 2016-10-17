#include <iostream>
#include <string>
using namespace std;

int main()
{
	char kalimat[100];
	int tampung;
	int jumlah[100];
	int index[100];

	cout<<"masukkan kalimat = "; 
	cin>>kalimat;
	// gets(kalimat);

	for(int i=0; i<strlen(kalimat); i++)
	{
		tampung=0;
		for(int j=0; j<strlen(kalimat); j++)
		{
			if(kalimat[i] == kalimat[j])
			{
				tampung++;
				jumlah[i]=tampung;
				index[j]=i;

			}
		}
	}

	for(int i=0; i<strlen(kalimat); i++)
	{
		if(i == index[i])
		{
			cout<<kalimat[i]<<" = "<<jumlah[i];
			cout<<endl;
		}
	}

}