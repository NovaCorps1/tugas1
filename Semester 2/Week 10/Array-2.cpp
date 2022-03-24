#include <iostream>
using namespace std;

int main()
{
	int a;
	char ganjil[20]={'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd' };
	for(a=0;a<=20;a++){
		if (a%2!=0)
			cout<<"hasil = "<<ganjil[a]<<endl ;
	}
}