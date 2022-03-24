#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Masukkan batas segitiga : "; 
    cin >> x;

    for (int a = 1; a <= x; a++)
    {

        if( a > 1 )
        {
            cout<<" "<<endl;
        }
        for (int b = a; b <= x; b++)
        {
            cout << " ";
        }
        for (int c = 1; c <= (2*a - 1); c++)
        {
            cout << "*";
        }
    }

    cout << endl;

    for (int o = 1; o <= x; o++)
    {
        if ( o > 1 )
        {
            cout<<" "<<endl;
        }
        cout << " ";
        for (int p=1; p <= o; p++)
        {
            cout << " ";
        }
        for (int q = 1; q <= (2 * (x - o) - 1);  q++)
        {
            cout << "*";
        }
    }
    cout << endl;

    return 0;
}