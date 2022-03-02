#include <iostream>
using namespace std;

int main(){
	int jml_index;
	cout << " Masukkan banyaknya data = ";
	cin >> jml_index;
	
	float nilai[jml_index], total, rata_rata;
	for(int a = 0; a < jml_index; a++){
		cout << " Data " << a << " = ";
		cin>>nilai[a];
		total += nilai[a];
	}
	cout << "Banyak data = " << jml_index << endl;
	rata_rata = total/jml_index;
	cout << " Rata-rata = " << rata_rata << endl;
	cout << " Jumlah = " << total << endl;
}
