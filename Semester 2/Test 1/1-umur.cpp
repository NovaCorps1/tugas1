#include<iostream>
using namespace std;

int main(){
    // bool main = True;
    int i = 0;
    while(i == 0){
        int age;
        cout << "Masukkan Umur : ";
        cin >> age;
        bool isTrue = age < 17;
        switch (int(isTrue))
        {
        case 0:
            cout << "Sudah Cukup Umur" << endl;
            break;
        case 1:
            cout << "Belum Cukup Umur" << endl;
            break;
        default:
            cout << "Umur yang anda masukkan tidak valid." << endl;
            break;
        }
    }
}