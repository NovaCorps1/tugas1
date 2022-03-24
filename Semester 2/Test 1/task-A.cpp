#include <iostream>
using namespace std;

int main(){

    int balance = 200000;
    int paper = 10000;

    int people = 8;
    
    int debit = balance / people;
    int leftovers = debit % paper;

    cout << "debitted per people " << debit - leftovers << endl;
    cout << "leftovers after debit " << leftovers * people << endl;
}