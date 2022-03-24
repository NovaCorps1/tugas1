#include <iostream>
using namespace std;

int main()
  {
    string nama;
    int x, n, data[50];
    float rata,jum;
    
    cout<<"Nama          = ";
    cin>>nama;
    cout<<"Jumlah  nilai = ";
    cin>>n;
    
    for (x=0; x<n; x++)
        {
           cout<<"nilai ke-"<<x+1<<"    = ";
           cin>>data[x];
           jum += data[x];
        }
        
    rata=jum/n;
        
    cout<<endl;
    cout<<nama<<", Nilai Rata-rata adalah "<<rata<<endl;
  return 0;
  }