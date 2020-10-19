#include <iostream>
using namespace std;

int main() {
	int hari, umurayah, umuribu, umuranak1, umuranak2, bantuan1, bantuan2, bantuan3, bantuan4, total; 
	hari=30;
	
	cout<<"Umur Ayah   : ";
	cin>>umurayah;
	if (umurayah<=12){
		bantuan1=15000;
	}
	else if (umurayah>12 && umurayah<=20){
		bantuan1=20000;
	}
	else if (umurayah>20){
		bantuan1=30000;
	}
	cout<<"Umur Ibu    : ";
	cin>>umuribu;
	if (umuribu<=12){
		bantuan2=15000;
	}
	else if (umuribu>12 && umuribu<=20){
		bantuan2=20000;
	}
	else if (umuribu>20){
		bantuan2=30000;
	}
	cout<<"Umur Anak 1 : ";
	cin>>umuranak1;
	if (umuranak1<=12){
		bantuan3=15000;
	}
	else if (umuranak1>12 && umuranak1<=20){
		bantuan3=20000;
	}
	else if (umuranak1>20){
		bantuan3=30000;
	}
	cout<<"Umur Anak 2 : ";
	cin>>umuranak2;
	if (umuranak2<=12){
		bantuan4=15000;
	}
	else if (umuranak2>12 && umuranak2<=20){
		bantuan4=20000;
	}
	else if (umuranak2>20){
		bantuan4=30000;
	}
	cout<<endl;
	
	total=(bantuan1+bantuan2+bantuan3+bantuan4)*hari;
	cout<<"Tagihan satu bulan adalah Rp."<<total<<endl;

	return 0;
}
