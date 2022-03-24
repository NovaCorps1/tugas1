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
        for (int p = o; p <= x; p++)
        {
            cout << " ";
        }
        for (int q = 1; q <= (2*o - 1); q++)
        {
            cout << "*";
        }
    }
    cout << endl;
    return 0;
}