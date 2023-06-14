#include<iostream>
using namespace std;
int main(){
	int jsw, tth, bsw, tsw, plh, tbyr;
	float dskn;
	
	cout<<"PILIH JENIS SEWA"<<endl;
	cout<<"1. Lux + Supir"<<endl;
	cout<<"2. Medium + Supir"<<endl;
	cout<<"3. Biasa + Supir"<<endl;
	cout<<"4. Lux "<<endl;
	cout<<"5. Medium "<<endl;
	cout<<"6. Biasa "<<endl;
	
	cout<<"Masukkan Jenis Sewa : ";
	cin>>plh;
	cout<<"Masukkan Jumlah Hari : ";
	cin>>tth;
	
	switch(plh){
		
		case 1 : tsw =500000*tth;
		{cout<<"Lux + Supir"<<endl;
		}
		break;
		case 2 : tsw =350000*tth;
		{cout<<"Medium + Supir"<<endl;
		}
		break;
		case 3 : tsw =200000*tth;
		{cout<<"Biasa + Supir"<<endl;
		}
		break;
		case 4 : tsw =450000*tth;
		{cout<<"Lux"<<endl;
		}
		break;
		case 5 : tsw =300000*tth;
		{cout<<"Medium"<<endl;
		}
		break;
		case 6 : tsw =150000*tth;
		{cout<<"Biasa"<<endl;
		}
		break;
		defaut :
			{cout<<"Jenis Tidak Ditemukan"<<endl;;
			}
		
		}
		
		if(tth>4 && tth<8){
		
			dskn=tsw*0.10;
		cout<<"Besar diskon : "<<dskn<<endl;
		}
		
		else if (tth>=8){
		
			dskn=tsw*0.20;
		cout<<"Besar diskon : "<<dskn<<endl;
	}
		tbyr:
		cout<<"Total bayar adalah";
		return 0;
			
			
		}
