#include <iostream>
using namespace std;
int main(){
    cout << "Program menentukan calon penumpang roller coaster"<< endl;
    int grade;

    cout << "1. 13 tahun - 16 tahun" << endl ;
    cout << "2. 17 tahun ke atas" << endl ;
    cout << "Berapa rentang Usia Anda : " ;
    cin >> grade ;

    switch (grade){
        case 1 : cout << "Belum cukup umur untuk naik roller coaster, masih harus diawasi." << endl ; break;
        case 2 : cout << "Sudah cukup umur, silahkan menikmati wahana roller coaster." << endl ; break;
        default : cout << "Maaf Anda masih kecil, kembalilah setelah berusia 17 tahun." << endl ; break;
    }
    return 0;

}