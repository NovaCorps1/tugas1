/*#include <iostream>
using namespace std;
int main () {
    int input;
    cout << "Masukkan nilai : ";
    cin >> input;

    if (input >= 10){
        cout << "Niliainya lebih" << endl;
    }
    else if (input <= 5){
        cout << "Nilainya pas" << endl;
    }
    else{
        cout << "Nilainya kurang" << endl;
    }
}*/

/*#include <iostream>
using namespace std;
int main (){
    int number;
    cout << "Masukkan Number : ";
    cin >> number;
    if (number % 7 == 0){
        cout << "Print" << number;
    }
}*/

#include <iostream>
using namespace std;
int main (){
    int nomor;

    cout << "Daftar Channel TV" << endl;
    cout << "1. SCTV" << endl;
    cout << "2. Indosiar" << endl;
    cout << "3. RCTI" << endl;
    cout << "Masukkkan Nomor yang anda inginkan: ";
    cin >> nomor;

    /*
    switch (nomor)
    {
        case 1 : cout << "channel yang anda masukkan adalah SCTV" << endl; break;
        case 2 : cout << "Channel yang anda masukkan adalah Indosiar" << endl; break;
        case 3 : cout << "Channel yang anda masukkan adalah RCTI" << endl; break;
        default : cout << "Nomor yang anda masukkan tidak terdaftar" << endl; break;
    }
    */
   if (nomor == 1){
       cout << "Channel yang anda masukkan adalah SCTV" << endl;
   }
   else if (nomor == 2){
       cout << "Channel yang anda masukkan adalah Indosiar" << endl;
   }
   else if (nomor == 3){
       cout << "Channel yang anda masukkan adalah RCTI" << endl;
   }
   else{
       cout << "Nomor yang anda masukkan tidak terdaftar" << endl;
   }
}