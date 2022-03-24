#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int angka1, angka2;
	
	// print label atas tabel
	cout << "tabel";
	for(angka1 = 1; angka1 <= 10; angka1++){
		cout << setw(4) << angka1;
	}
	cout << endl;
	
	// print label kiri dan isi tabel perkalian
	for (angka1 = 1; angka1 <= 10; angka1++)
	{
		cout << setw(4) << angka1 << " ";
		for (angka2 = 1; angka2 <= 10; angka2++){
			cout << setw(4) << angka1*angka2;
		}
		cout << endl;
	}
	
	return 0;
}