#include<iostream>
using namespace std;
int main(){
	float b,t,tm,bmi;
	cout<<"Masukkan Nilai Berat (kg) = ";cin>>b;
	cout<<"Masukkan Nilai Tinggi(cm) = ";cin>>t;
	tm=t/100;
	bmi=b/(tm*tm);
	cout<<"Jadi Nilai bmi = "<<bmi<<endl;
	return 0;
}
