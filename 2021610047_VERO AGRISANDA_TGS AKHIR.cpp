#include <iostream>
using namespace std;

int plh, saldo, tarik, trf;
string yes;

void line(){
	cout<<"-----------------------------"<<endl;
}

void display() {
    
    
    cout<<"SIMULASI BY VERO AGRISANDA"<<endl;
    line();
    cout<<"SELAMAT DATANG DI ATM BANK KW"<<endl;
    line();
    cout<<"1. Penarikan Tunai"<<endl;
    cout<<"2. Transfer"<<endl;
    cout<<"3. Cek Saldo"<<endl;
}

int main(){
    int norek, nominal;
    string abc, cobalagi;
    
    do{
    	system("cls");
        display();
		line();
		cout<<"Masukkan pilihan anda: ";
        cin>>plh;
        if (plh==1){
            line();
            cout<<"a. 100000"<<endl;
            cout<<"b. 200000"<<endl;
            cout<<"c. 300000"<<endl;
            cout<<"PILIH NOMINAL YANG AKAN DIAMBIL"<<endl;
            cin>>abc;
            if (abc=="a"){
                saldo = 1000000 - 100000;
                cout<<"Nominal yang akan anda tarik adalah : Rp. 100000"<<endl;
                cout<<"Saldo anda sekarang = Rp. ";
                cout<<saldo<<endl;
            } else {
                if (abc=="b"){
                    saldo = 1000000 - 200000;
                    cout<<"Nominal yang akan anda tarik adalah : Rp. 200000"<<endl;
                    cout<<"Saldo anda sekarang = Rp. ";
                    cout<<saldo<<endl;
                } else {
                    if (abc=="c"){
                        saldo = 1000000 - 300000;
                        cout<<"Nominal yang akan anda tarik adalah : Rp. 300000"<<endl;
                        cout<<"Saldo anda sekarang = Rp. ";
                        cout<<saldo<<endl;
                    } else {
                        cout<<"Anda Salah Memasukkan a b c "<<endl;
                    }
                }
            }
        } else {
            if (plh==2){
                cout<<"Silahkan masukkan nomer rekening tujuan anda = ";
                cin>>norek;
                cout<<"Masukkan nominal yang akan anda transfer = ";
                cin>>nominal;
                saldo = 1000000 - nominal;
                cout<<"Saldo anda sekarang = Rp.";
                cout<<saldo<<endl;
            } else {
                if (plh==3){
                    cout<<"Saldo anda sekarang adalah = Rp.1000000" <<endl;
                } else {
				cout<<"Tidak Ditemukan";
				}
			}
		}
       
        cout<<"coba lagi ? [Y / T] ";
        cin>>cobalagi;
    } while (cobalagi=="Y" || cobalagi=="y");
    line();
    cout<<"TERIMA KASIH TELAH BERTRANSAKSI";
    return 0;
}
