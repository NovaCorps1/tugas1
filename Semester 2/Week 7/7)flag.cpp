#include <iostream>
using namespace std;

int main(){
	bool some_flag;
	some_flag = true;
	do{
		char answer;
		cout << "This is an iteration" << endl;
		cout << "Again? (y / n):";
		cin >> answer;
		if (answer != 'y') some_flag = false;
	} while (some_flag);
	
	return 0;
}