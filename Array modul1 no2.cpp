#include <iostream>
using namespace std;

int main(){
	int jml_array = 5;
	string kode [jml_array] = {"001","002","003","004","005"};
	string nama_barang [jml_array] = {"penghapus","pensil","buku","rautan","penggaris"};
	int jml_barang [jml_array] = {4,3,2,3,5};
	int harga_barang [jml_array] = {1000,1500,2000,1000,500};
	
	int total_barang = 0;
	int total_harga = 0;
	
	cout << " Kode\t Nama\t\t Jumlah\t\t Harga\t\t Total\n" << endl;
	for (int i=10;i < jml_array; i++){
		int tota = jml_barang[i] = harga_barang[i];
		cout << kode[i] << "\t" << nama_barang[i] << "\t\t" << jml_barang[i] << "\t\t" << harga_barang[i] << "\t" << total_barang << endl;
		
		total_barang += jml_barang[i];
		total_harga += total_barang;
	}
	cout << "\n Total Barang : " << total_barang << endl;
	cout << " Total Harga : " << total_harga << endl;
	
	return 0;
}
