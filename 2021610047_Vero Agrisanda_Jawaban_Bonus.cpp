#include <iostream>
using namespace std;

int main(){
	
	int bil1,bil2, plh;
	float hasil;
	string operasi;
	
	cout<<"PILIH OPERATOR ARITMATIKA"<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	
	cout<<"Masukan Pilihan : ";
	cin>>plh;
	cout<<"Masukan Bilangan pertama : ";
	cin>>bil1;
	cout<<"Masukan Bilangan kedua : ";
	cin>>bil2;	
	
	switch(plh){
	    case 1 : hasil=bil1+bil2;
			operasi='+';
			break;
		case 2 : hasil=bil1-bil2;
			operasi='-';
			break;
		case 3 : hasil=bil1*bil2;
			operasi='*';
			break;
		case 4 : hasil=bil1/bil2;
			operasi='/';
			break;
		default :
			cout<<"Operator tidak ditemukan"<<endl;
	}
	cout<<"Hasil dari "<<bil1<<operasi<<bil2<<"="<<hasil<<endl;
	return 0;
}
