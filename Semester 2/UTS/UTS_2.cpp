#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        string nama,nim, x;
        
        cout << "Masukkan Nama: "; getline (cin,nama);

        cout << "Masukkan NIM: "; cin >> nim;

        if (nama.length() < 3)
        {

            cout << "\nNama yang anda masukkan terlalu pendek!" << endl;

        } else if (nim.length() != 8)
        {

            cout << "\nInvalid NiM !!! masukkan 8 digit angka !" << endl;

        } else 
        {
            cout << "\nNama dan NIM valid !!!!" << endl;
            cout << "Nama: " << nama << endl;
            cout << "NIM:" << nim << endl;    

            cout << "\nAnda ingin Lanjut? [ya/tidak] "; cin >> x;

            if (x == "tidak")
                cout << "Terima kasih. Program dihentikan";
                break;     
        }
    
    }

    return 0;
}