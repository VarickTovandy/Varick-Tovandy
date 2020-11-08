#include <iostream>
using namespace std;

int main(){
	int pilih, a, b, a_n, a_1, b_n, b_1;
	int i;
	
	cout<<"Perkalian & Perpangkatan======"<<endl;
	cout<<"1. Perkalian"<<endl;
	cout<<"2. Perpangkatan"<<endl;
	
	cout<<"Pilih : ";
	cin>>pilih;
	
	switch(pilih){
		case 1:
		
		cout<<"Input Angka N: ";
		cin>>a;
		cout<<"Inpur Angka M: ";
		cin>>b;
		cout<<"Hasil "<<a<<" x "<<b<<endl;
		if (a >= 0 && b >= 0){
			cout<<b;
			b_1 = b;
			for(int i=1; i<a; i++){
				cout<<" + "<<b;
				b_n = b_1 + b;
				b_1 = b_n;
			}
			cout<<" = "<<b_n<<endl;
			cout<<endl;
			cout<<"Terima kasih :)"<<endl;
		}
		else{
			cout<<"Mohon Masukkan Bilangan Positif!"<<endl;
		}
		break;
		
		case 2:
		
		cout<< "Input Angka N: "; 
		cin>>a;
		cout<< "Input Angka M: "; 
		cin>>b;
		cout<<"Hasil "<<a<<" ^ "<<b<<endl;
		if(a>=0 && b>=0){
			cout<<a;
			a_1 = a;
			for(int i=1; i<b; i++){
				cout<<" * "<<a;
				a_n = a_1 * a;
				a_1 = a_n;
			}
			cout << " = "<<a_n<<endl;
			cout<<endl;
			cout<<"Terima kasih :)"<<endl;
		}
		else{
			cout<<"Mohon Masukkan Bilangan Positif!"<<endl;
		}
		break;	
	}
}
