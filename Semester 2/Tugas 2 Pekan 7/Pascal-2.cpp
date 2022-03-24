#include<iostream>
using namespace std;

int main()
{
    int x;
    cout << "Masukkan batas segitiga : "; 
    cin >> x;
    
    for (int o = 1; o <= x; o++)
    {
        if( o > 1 )
        {
            cout<<" "<<endl;
        }
        for (int p = 1; p <= o; p++)
        {
            cout << "*";
        }
    }
    cout << endl;
    return 0;
}