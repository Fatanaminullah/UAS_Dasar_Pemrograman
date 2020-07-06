#include <iostream>
using namespace std;

int main() {
	cout << "\t\t\t Formulir Pembelian Barang" << endl;
	cout << "\t\t\t    Toko Sejahtera" << endl;
	
	string namaPelanggan, alamat, noHp, diskon;
	int hargaBarang1, hargaBarang2, hargaBarang3, banyakBarang1, banyakBarang2, banyakBarang3, jumlahPembelianBarang, totalHarga, totalDiskon, totalBayar;
	
	cout << "Nama Pelanggan: ";
	cin >> namaPelanggan;
	cout << "Alamat : ";
	cin >> alamat;
	cout << "No HP: ";
	cin >> noHp;
	
	cout << "Harga Barang 1:";
	cin >> hargaBarang1;
	cout << "Banyaknya Barang 1: ";
	cin >> banyakBarang1;
	cout << "Harga Barang 2:";
	cin >> hargaBarang2;
	cout << "Banyaknya Barang 2: ";
	cin >> banyakBarang2;
	cout << "Harga Barang 3:";
	cin >> hargaBarang3;
	cout << "Banyaknya Barang 3: ";
	cin >> banyakBarang3;
	
	jumlahPembelianBarang = banyakBarang1 + banyakBarang2 + banyakBarang3;
	totalHarga = (hargaBarang1 * banyakBarang1) + (hargaBarang2 * banyakBarang2) + (hargaBarang3 * banyakBarang3);
	if (totalHarga < 500000) {
		diskon = "10%";
		totalDiskon = totalHarga * 10/100;
	} else if (totalHarga >= 500000 && totalHarga <= 1000000) {
		diskon = "15%";
		totalDiskon = totalHarga * 15/100;
	} else if (totalHarga > 1000000) {
		diskon = "20%";
		totalDiskon = totalHarga * 20/100;
	}
	totalBayar = totalHarga - totalDiskon;
	
	cout << "============================================================" << endl;
	cout << "\nNama Pelanggan	: " << namaPelanggan << endl;
	cout << "Alamat 		: " << alamat << endl;
	cout << "No.HP		: " << noHp << endl;
	cout << endl;
	cout << "Jumlah Pembelian Barang		: "<< jumlahPembelianBarang << endl;
	cout << "Total Harga Sebelum Diskon	: " << totalHarga << endl;
	cout << "Diskon				: " << totalDiskon << "(" << diskon << ")" << endl;
	cout << "Total Bayar			: " << totalBayar << endl;
	
}
