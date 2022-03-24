#include <iostream>
using namespace std;

int main(){
    
    string username;
    int passcode;

    while (true)
    {
        cout << "\nusername : "; cin >> username;
        cout << "password : "; cin >> passcode;
        if (username == "10201075@student.itk.ac.id" && passcode == 123456789)
        {
            cout << "\n~BERHASIL MASUK~\nSelamat Datang :\nNama : Muhammad Rifaldi\nNim : 10201065" << endl;
            return 0;
        }
        else {
            cout << "\nGagal! Data Tidak dikenal..." << endl;
        }
    }

}