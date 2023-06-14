#include <iostream>
using namespace std;
int main(){
    string nama;
    int idkar, gapok, gakar, jbur, jnak, tjbur, tjnak, pobat, golongan, jbat, tjbat;
    
    cout<<" Masukkan Nama Anda : ";
	getline(cin,nama);
    cout<<"Masukkan Id Karyawan : ";
	cin>>idkar;
    cout<<"Total Jam Lembur : ";
	cin>>jbur;
    cout<<"Jumlah Anak : ";
	cin>>jnak;
    cout<<"Total Jam Terlambat : ";
	cin>>jbat;
    cout<<"Golongan : ";
	cin>>golongan;
    
    gapok=1000000;
    tjbur=jbur*50000;
    
    if(jnak<=2)
    tjnak=jnak*250000;
    else
    tjnak=2*250000;
    
    if(tjbat<=10)
   	pobat=jbat*25000;
    else
    pobat=((10*25000)+((tjbat-10)*50000));
    
    if(golongan=1)
    tjbat=500000;
    else if
    (golongan=2) 250000;
    else
    tjbat=0;
    
    gakar=(gapok+tjbat+tjbur+tjnak)-pobat;
    cout<<endl;
    cout<<"Nama anda adalah : "<<nama<<endl;
    cout<<"Gaji anda bulan ini adalah : Rp. "<<gakar<<endl;
    
    cout<<"Created By VERO AGRISANDA";
    
      return 0;
      
}
