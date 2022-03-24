#include<iostream>
using namespace std;

int main(){
    int na;
    cout << "Masukkan Nilai :";
    cin >> na;
    switch (na)
    {
    case 100:
        cout << "Bagus" << endl;
        break;
    case 70:
        cout << "Lumayan" << endl;
        break;
    default:
        cout << "Nilai yang anda masukkan salah" << endl;
        break;
    }
}