#include<iostream>
using namespace std;
int main(){
	double gapok,tt,um,pp,pajak;
	long tgd;
	string nama,div;
	
	cout<<"Masukkan Nama Anda = ";
	getline(cin,nama);
	cout<<"Masukkan Divisi Anda = ";
	getline(cin,div);
	
	gapok=1000000;
	tt=400000;
	um=225000;
	pp=0.06;
	pajak=pp*(gapok+tt+um);
	tgd=gapok+tt+um-pajak;
	
	cout<<"Nama Karyawan :"<<nama<<endl;
	cout<<"Divisi Karyawan :"<<div<<endl;
	cout<<"Total Pajak :"<<pajak<<endl;
	cout<<"Total Gaji Yang Diterima :"<<tgd<<endl;
	cout<<"Created By Vero Agrisanda";
	return 0;
}

