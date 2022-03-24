#include<iostream>
using namespace std;

int main(){
    string nama,nim, pilihan;


    while(pilihan != "N"){
        cout << "Apakah anda ingin memasukkan NIM dan Nama? " << endl; 
        cout << "Jika 'Ya' tulis 'Y'" << endl; 
        cout << "Jika 'Tidak' tulis 'N'" << endl; 
        cout << "Masukkan pilihan tanpa tanda kutip : "; getline(cin,pilihan);
        if(pilihan == "Y"){
            // input nim
            cout << "NIM : " ; getline(cin,nim);

            // input nama
            cout << "Nama : " ; getline(cin,nama);
            if (nim.length() != 8){
                cout << "NIM yang anda masukkan tidak valid! NIM harus berupa angka dengan panjang 8 karakter!" << endl;
                continue;
            }

            cout << "NIM anda " << nim << " Nama anda " << nama << endl;
        }else if(pilihan == "N"){
            break;
        }else{
            cout << "Pilihan anda tidak benar. Silahkan coba lagi!" << endl;
            continue;
        }
    }
    return 0;
}