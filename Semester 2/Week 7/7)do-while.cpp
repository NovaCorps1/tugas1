#include <iostream>
using namespace std;

int main(){
	char jawaban_loop;
	string nama;
	int tagihan;
	int total_tagihan;
	
	total_tagihan = 0;
	jawaban_loop = 'y';
	do{
		cout << "Masukkan Nama: ";
		cin >> nama;
		cout << "Masukkan Tagihan bulan ini: ";
		cin >> tagihan;
		total_tagihan = total_tagihan + tagihan;
		cout << "Apakah ada data tambahan? (y atau n): ";
		cin >> jawaban_loop;
	} while (jawaban_loop == 'y');
	
	cout << "Total tagihan yang harus dibayar ---->" << total_tagihan << endl;
	
	return 0;
}