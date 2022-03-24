#include <iostream>
using namespace std;

int conversiKelvin(int suhuCelc);

int main(void)
{	
	int tempcelcius;
	int tempkelvin;
	
	cout << "Masukkan nilai Celcius : ";
	cin >> tempcelcius;
	
	tempkelvin = conversiKelvin(tempcelcius);
	
	cout << "\nTemperatur pada suhu Kelvin : ";
	cout << tempkelvin;
	
	return 0;
}

int conversiKelvin(int suhuCelc)
{
	int kelvin;
	kelvin = suhuCelc + 273;
	
	return kelvin;
}
