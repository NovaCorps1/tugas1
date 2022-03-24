#include <iostream>
using namespace std;

int main(){
	int i = 0;
	while(true){
		i++;
		if (i % 3 == 0){
			continue;
		}
		else if(i == 25){
			break;
		}
		cout << "This is iteration number --> " << i << endl;
	}
	
	cout << "The program is over";
	return 0;
}
