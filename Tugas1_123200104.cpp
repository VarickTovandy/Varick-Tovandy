#include <iostream>
using namespace std;
main()
{
		int nim, uts, uas, akhir;
		char nama[30];
		
		cout<<"Nama   : ";
		cin>>nama;
		cout<<"NIM    : ";
		cin>>nim;
		cout<<"UTS    : ";
		cin>>uts;
		cout<<"UAS    : ";
		cin>>uas;
		cout<<endl;
		
		akhir = (uts+uas)/2;
		
		cout<<"Hai, nama saya "<<nama<<", nim "<<nim<<endl;
		cout<<"Nilai akhir saya "<<akhir<<endl;
		
}
