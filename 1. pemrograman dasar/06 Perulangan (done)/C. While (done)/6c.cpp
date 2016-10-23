#include <iostream> 
#include <string> 
using namespace std;

bool cekHuruf(string str){
	bool result=true;
	for(int i = 0; i < str.length(); ++i) {
		if(!isalpha(str[i])){
			result=false;
			break;
		}
	}return result;
}

int main(){
	int counter=1, 
		maxLoop=100, 	//	ubah sesuai selera 
		maxChar=100;	// 	ubah sesuai selera
	bool lanjutkan;
	string allkata="";
	cout<<"# : untuk berhenti\n";
	
	do{
		string kata;
		cout<<"kata ke-"<<counter<<" :";
		cin>>kata;
		
		if(kata=="#") { // untuk berhenti input 
			cout<<">> Anda memutuskan untuk berhenti \n";
			lanjutkan=false;
		}else if (counter>maxLoop){ // melebihi batas kata 
			cout<<">> Maksimal "<<maxLoop<<" kata  !!\n";
			lanjutkan=false;
		}else if(kata.length()>maxChar) // melebihi batas karakter  
			cout<<">> Maksimal  "<<maxChar<<" karakter !!\n";
		else if(!cekHuruf(kata)) // selain huruf  
			cout<<">> hanya huruf (a-z)) !!\n";
		else { // normal
			allkata+=kata+"\n";
			counter++;
		}
	} while (lanjutkan);
	cout<<"\ncetak :\n"<<(counter==1?"Anda belum memasukkan kata":allkata);
	return 0;
}

// reference :  https://cal-linux.com/tutorials/strings.html