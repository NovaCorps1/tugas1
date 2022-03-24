#include<iostream>
using namespace std;

int main(){
    while (1)
    {
        int nilai;
        cout << "\nMasukkan Nilai : "; 
        cin >> nilai;
        string predikat = "";
        if((nilai >= 80) && (nilai <=100)){
            predikat = "A";
        }else if ((nilai >= 60) && (nilai <= 79))
        {
            predikat = "B";
        }else if ((nilai >= 0) && (nilai <= 60))
        {
            predikat = "C";
        }else{
            cout << "Nilai yang anda masukkan salah" << endl;
            continue;
        }
        
        cout << "\nNilai Anda : " << nilai << endl;
        cout << "Predikat Anda : " << predikat << endl;
    }
    

    
}