#include<iostream>

using namespace std;
int main ()
{
    int kode,pri,jml,tot,byr,kbl;
    char mad;
    do
    {
    cout<<"          Warung Makan & Minum           "<<endl;
    cout<<"          gass kann saja pesannn           "<<endl;
    cout<<"============================================"<<endl;
    cout<<""<<endl;
   
    cout<<"Menu Makanan                Harga"<<endl;
    cout<<"============================================"<<endl;
    cout<<"1. AYAM GORENG            Rp. 10.000"<<endl;
    cout<<"2. NASI GORENG            Rp.  8.000"<<endl;
    cout<<"3. Es Teh                 Rp.  5.000"<<endl;
    cout<<"4. JUS JERUK              Rp.  6.000"<<endl;
    cout<<'\n'<<"MASUKKAN PILIHAN ANDA :";
    cin>>kode;
    switch (kode){
    case 1:
        cout<<'\n'<<"AYAM GORENG"<<endl;
        pri=10000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 2:
        cout<<'\n'<<"NASI GORENG"<<endl;
            pri=8000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 3:
        cout<<'\n'<<"Es Teh"<<endl;
            pri=5000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 4:
        cout<<'\n'<<"JUS JERUK"<<endl;
            pri=6000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    default:
    cout<<"Kode Yang Anda Masukkan Tidak Ada \n";
    }
    }
    while (mad/='Y');
    cout<<"Terimah Kasih Atas Kunjungan Anda";
    return 0;
}