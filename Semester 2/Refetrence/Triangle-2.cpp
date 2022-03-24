#include <iostream>
using namespace std;
int main()
{
    int x,y;

    for(x=1; x<=5; x++)
    {
        cout << " " << endl;
        for(y=1; y<=x; y++)
        {
            cout << "*";
        }
    }
    cout << endl;
    return 0;
}