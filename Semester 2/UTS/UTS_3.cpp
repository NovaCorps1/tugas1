#include <iostream>
using namespace std;

int main()
{
    string nama, nim, pilihan;

    do
    {
        cout << "Apakah anda ingin memasukan nim dan nama (y/n)";
        cin >> pilihan;
        if (pilihan == "y")
        {
            cout << "NIM: ";
            cin >> nim;
            cout << "Nama : ";
            cin >> nama;
            cout << "\nNIM anda : " << nim << "\nNama anda : " << nama << endl;
        }

        if (pilihan != "y" && pilihan != "Y" && pilihan != "n" && pilihan != "N")
        {
            cout << "Pilihan anda tidak benar " << endl;
        }
    } while (pilihan != "n" && pilihan != "N");
    return 0;
}