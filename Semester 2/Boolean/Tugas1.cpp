#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int x, y;

    x = 5;
    y = 10;

    // Print result
    y+=x;
    cout << "Hasil y += x adalah " << y << endl;

    y-=x;
    cout << "Hasil y -= x adalah " << y << endl;

    y*=x;
    cout << "Hasil y *= x adalah " << y << endl;

    y/=x;
    cout << "Hasil y /= x adalah " << y << endl;

    y%=x;
    cout << "Hasil y %= x adalah " << y << endl;

    return 0;
}