#include <iostream>
#include <string>
using namespace std;
main(){
	char pilih;
	string user, pass;
	int harian, uts, uas;
	double median;
	
	cout<<"Login Akun =========="<<endl;
	cout<<"Username        : ";
	cin>>user;
	cout<<"Password        : ";
	cin>>pass;
	cout<<"======================"<<endl;
	cout<<endl;
	
	if(user == "admin" && pass == "123"){
		cout<<"Login berhasil!"<<endl;
		cout<<endl;
		cout<<"Input Nilai Mata Kuliah"<<endl;
		cout<<"1. Algoritma dan Pemrograman"<<endl;
		cout<<"2. Kalkulus"<<endl;
		cout<<"Pilih : ";
		cin>>pilih;
		cout<<endl;
		
		switch (pilih){
			case '1':
			cout<<"Nilai Harian    : ";
			cin>>harian;
			cout<<"Nilai UTS       : ";
			cin>>uts;
			cout<<"Nilai UAS       : ";
			cin>>uas;
			cout<<endl;
			if(median >= 80){
				median = (harian + uts + uas)/3.0;
				cout<<"Anda lulus Algoritma dan Pemrograman dengan nilai "<<median<<endl;
			}
			else if(median<80){
				median = (harian + uts + uas)/3.0;
				cout<<"Anda tidak lulus Algoritma dan Pemrograman dengan nilai "<<median<<endl;
			}
			
			case '2':
			cout<<"Nilai Harian    : ";
			cin>>harian;
			cout<<"Nilai UTS       : ";
			cin>>uts;
			cout<<"Nilai UAS       : ";
			cin>>uas;
			cout<<endl;
			if(median >= 80){
				median = (harian + uts + uas)/3.0;
				cout<<"Anda lulus Kalkulus dengan nilai "<<median<<endl;
			}
			else if(median<80){
				median = (harian + uts + uas)/3.0;
				cout<<"Anda tidak lulus Kalkulus dengan nilai "<<median<<endl;
			}
			default:
			cout<<"Input Anda Salah!";
		}
	}
	else if(pass == "123"){
		cout<<"Username anda salah!"<<endl;
		}
	else if(user == "admin"){
		cout<<"Password anda salah!"<<endl;
		}
	else{
		cout<<"Password dan Username anda salah!"<<endl;
	}	
}
