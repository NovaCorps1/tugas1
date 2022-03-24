#include <iostream>
using namespace std;

int main(){
	int some_array[10];
	int i;
	
	cout << "Isi array sebelum: ";
	for(i = 0; i < 10; i++){
		cout << some_array[i] << " ";
	}
	cout << endl;
	
	int input_user;
	for(i = 0; i < 10; i++){
		cout << "Masukkan angka ke-" << i + 1 << ": "; 
		cin >> input_user;
		some_array[i] = input_user;
	}
	
	cout << "Isi array sesudah: ";
	for(i = 0; i < 10; i++){
		cout << some_array[i] << " ";
	}	
	
	return 0;
}
