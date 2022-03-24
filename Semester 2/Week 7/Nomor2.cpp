#include <iostream>
using namespace std ;

int main ()
{
	string nama ;
	int usia ;
	char golonganDarah[2] ;
	float tinggiBadan ;
	double beratBadan ;

	cout << "Masukkan Nama Lengkap	: ";
	getline (cin,nama) ;
	cout << "Masukkan Usia		: ";
	cin >> usia ;
	cout << "Masukkan Golongan Darah	: ";
	cin >> golonganDarah ;
	cout << "Masukkan Tinggi Badan	: " ;
	cin >> tinggiBadan  ;
	cout << "Masukkan Berat Badan	: ";
	cin>> beratBadan ;
	
    cout << " ----------------------------------------- ";
	cout << " ^^Data Yang Dimasukkan^^ " << endl;
    cout << " ----------------------------------------- ";
	cout << " \nNama		: " << nama ;
	cout << " \nUsia		: " << usia << " tahun ";
	cout << " \nGolongan Darah	: " << golonganDarah ;
	cout << " \nTinggi Badan 	: " << tinggiBadan << " cm " ;
	cout << " \nBerat Badan	: " << beratBadan << " kg " ;
	
	return 0 ;
}