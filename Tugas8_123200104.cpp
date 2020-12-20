#include<iostream>
using namespace std;

double luas, keliling, volume;
double phi = 3.14;
double r, t;
char ulang;
int pilih;
void luas1();
void keliling1();
void volume1();

void luas1(){
	cout << "Jari - jari    : ";
	cin >> r;
	luas = phi * r * r;
	cout << "Luas Lingkaran adalah " << luas <<endl;
}

void keliling1(){
	cout << "Jari - jari    : ";
	cin >> r;
	keliling = phi * 2 * r;
	cout << "Keliling Lingkaran adalah " << keliling <<endl;
}

void volume1(){
	cout << "Jari - jari    : ";
	cin >> r;
	cout << "Tinggi         : ";
	cin >> t;
	volume = phi * r * r * t;
	cout << "Volume Tabung adalah " << volume <<endl;
}

int main(void){
	bool play_again = true;
	while (play_again)
{
	cout << "Hitung Lingkaran ==============" << endl;
	cout << "1. Luas Lingkaran" <<endl;
	cout << "2. Keliling Lingkaran" <<endl;
	cout << "3. Volume Lingkaran" <<endl;
	cout << "Pilih: ";
	cin >> pilih;
	
	switch (pilih){
		case 1:
			luas1();
			break;
		case 2:
			keliling1();
			break;
		case 3:
			volume1();
			break;
	}
	cout << "Ulangi Program? (y/n) ";
	cin >> ulang;
	cout << endl;
	if (tolower(ulang) != 'y')
		{
		    play_again = false;
		    }
	else if (tolower (ulang) != 'n')
		{
			play_again = true;
			}
	}
	return 0;
}
