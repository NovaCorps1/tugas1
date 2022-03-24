#include<iostream>
using namespace std;

int main()
{
    int number[10] = {8,2,8,4,5,3,6,8,1,9};

    for(int x=0; x<10; x++) 
    { 
        if(number[x] == 8)
        { 
            cout << "Index-" << x << " terdapat angka 8\n";
        }
    }
}