#include<iostream>
using namespace std;
int main(){
	unsigned int ht,p,l,luas,hj,jp,tb;
	float ppb;
	string nama;
	
	cout<<"Masukkan Nama Anda = ";
	getline(cin,nama);
	
	
	ht=2250000;
	p=55;
	l=25;
	ppb=0.075;
	luas=p*l;
	hj=ht*luas;
	jp=hj*ppb;
	tb=hj+jp;
	
	cout<<"Pembeli : "<<nama<<endl;
	cout<<"Harga Jual Rp "<<hj<<endl;
	cout<<"Jumlah Pajak Rp "<<jp<<endl;
	cout<<"Total Bersih Rp "<<tb<<endl;
	cout<<"Created By Vero Agrisanda";
	return 0;
	
	
}
