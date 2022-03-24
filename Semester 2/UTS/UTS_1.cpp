#include<iostream>
using namespace std;

int main(){
    string nama,nim, pilihan;

    do{
        cout << "Apakah anda ingin memasukkan NIM dan Nama? (y/n)"; cin >> pilihan;

        if(pilihan == "y"){
            // input nim
            cout << "NM : " ; cin >> nim;
            // input nama
            cout << "Nama : " ; cin >> nama;

            cout << "NIM anda " << nim << " Nama anda " << nama << endl;

        }

        if(pilihan != "y" && pilihan != "n"){
            cout << "Pilihan anda tidak benar. Silahkan coba lagi!" << endl;
            // break;
        }
    }while(pilihan != "n");
    
    return 0;
}