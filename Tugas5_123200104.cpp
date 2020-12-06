#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int pilih, panjang, lebar, tinggi, angka=1, i, j, baris, out=0, t;
	cout<<"Gambar Bangun Datar =========="<<endl;
	cout<<"1. Kotak bolong"<<endl;
	cout<<"2. Segitiga"<<endl;
	cout<<"Pilih : ";
	cin>>pilih;
	cout<<endl;
	
	switch(pilih){
		case 1:
			cout<<"Panjang : ";
			cin>>panjang;
			cout<<"Lebar   : ";
			cin>>lebar;
			
			for (i=1; i<=panjang; i++){
    			for (j=1; j<=lebar; j++){
    				if(i==1||i==panjang||j==1||j==lebar){
        				cout<<"* ";
    					}
					else{
        				cout<<"  ";
    					}
				}
    			cout<<"\n";
		}

			break;
			
		case 2:
			cout<<"Tinggi  : ";
			cin>>baris;
			
			for (int l = 1; l <= baris; l++){
				t=l;
				cout<<l<<" ";
				for(int m=1; m<l; m++){
					out=t+baris-m;
					cout<<out;
					cout<<" ";
					t=out;
				}
				cout<<endl;
			}
			break;
		}
	}
