#include <iostream>
using namespace std;

int main(){
	int numberarray[] = {5, 7, 12, 31, 4, 11, 52, 67, 17, 4};

	bool belum_sort = true;
	int i;
	int temp;
	while(belum_sort){
		belum_sort = false;
		for (i = 0; i < 9; i++){
			if(numberarray[i] > numberarray[i+1]){
				temp = numberarray[i];
				numberarray[i] = numberarray[i+1];
				numberarray[i+1] = temp;
				belum_sort = true;
			}
		}
	}
	
	cout << "Hasil: ";
	for (i = 0; i < 10; i++){
		cout << numberarray[i] << " ";
	}
	
	return 0;
}
