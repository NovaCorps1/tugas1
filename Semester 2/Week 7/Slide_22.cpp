#include <iostream>
using namespace std;
int main(){
    cout << "\n.:: KONVERSI NILAI ::.\n" << endl;
    int nilai;

    cout << "Berapa nilai Pemrograman Terstruktur Anda? " << endl;
    cout << "Jawab : " ;
    cin >> nilai;

    if ((nilai >= 80) && (nilai <= 100)){
        cout << "A" << endl;
        cout << "Sempurna" << endl; 
    }
    else if ((nilai >= 60) && (nilai <=79)){
        cout << "B" << endl;
        cout << "Bagus" << endl;
    }
    else if ((nilai >=50) && (nilai <=59)){
        cout << "C" << endl;
        cout << "Cukup, Tingkatkan lagi kedepannya!" << endl;
    }
    else {
        cout << "Anda harus mengulang mata kuliah ini di semester selanjutnya, Semangat!" << endl;
    }
    return 0;

}