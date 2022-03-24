#include <iostream>
using namespace std;
int main()
{
    int o, p;

    for(o=1; o<=5; o++)
    {
        for(p=o; p<=5; p++)
        {
            cout << " ";
        }
        for(p=1; p<=o; p++)
        {
            cout << "*" ;
        }
        cout << endl;
    }
    return 0;
}