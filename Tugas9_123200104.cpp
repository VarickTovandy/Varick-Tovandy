#include <iostream>
#include <conio.h>
using namespace std;

int main() {
  int maksimum, minimum, selisih, jumlah, i = 1, angka_selisih=0;
  float rata, total=0;
  
  cout << "Masukkan banyak angka: ";
  cin >> jumlah;
  int array[jumlah];

  for (i = 0; i < jumlah; i ++) {
    cout << "Elemen ke-" <<(i+1) <<": ";
    cin >> array[i];
    total = total + array[i];
  }
  rata = total/jumlah;
  
  maksimum = array[0];
  for(i = 0; i < jumlah; i++) {
    if (array[i] > maksimum)  {
      maksimum = array[i];
    }
  }
  
  minimum = array[0];
  for(i = 0; i < jumlah; i++) {
  	if (array[i] < minimum) {
  		minimum = array[i];
  	}
  }
  
  for(int i = 0; i < jumlah; i++){
  	selisih = array[i] - array[i+1];
		if(i == jumlah - 1)
			selisih  = array[i] - array[i - 1];
		if(selisih < 0)
			selisih*=-1;
		if(selisih >= angka_selisih)
			angka_selisih = selisih;
  }
  cout << endl;
  cout << endl;
  cout << "_____Hasil_____" <<endl;
  cout << "Deret       : ";
  for(i = 0; i < jumlah; i++) {
  	cout << array[i] << " ";
  }
  cout << endl;
  cout << "Maksimum    : " << maksimum << endl;
  cout << "Minimum     : " << minimum << endl;
  cout << "Rata-rata   : " << rata << endl;
  cout << "Selisih Max : " << angka_selisih << endl;
}
