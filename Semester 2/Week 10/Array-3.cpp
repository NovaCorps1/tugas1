#include <iostream>
using namespace std;
int main(){
	int i;
	char z;
	char abjad[20]={'a', 'b', 'c', 'd','e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't'};
	cout<<"Masukkan huruf : ";
	cin>>z;
	
	for(i=0;i<=20;i++){
		if (z==abjad[i])
			cout<<"Terdapat huruf yang dicari"<<endl ;
	else continue;
	}
	return 0;
}