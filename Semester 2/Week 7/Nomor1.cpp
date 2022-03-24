#include <iostream>
using namespace std ;

int main ()
{
	int Uang = 200000 ;
	int perAnak = 20000 ;
	int jumlahAnak = 8 ;
	int sisa ;
	
	cout << "Tiap Anak Mendapat " << perAnak ;
	sisa = Uang - (perAnak * jumlahAnak) ;
	
	cout << "\nSisa uang Ibu Yuni setelah membagikan uang lebaran Ke 8 anak adalah " << sisa ;
	
	return 0 ;
}