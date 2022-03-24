#include<iostream>
using namespace std;

int main()
{

    int number[2][3];

    cout << "Matriks 2 dimensi" << endl;

    for(int i=0; i<2; i++)
    {
        cout << "Baris ke-" << i+1 << endl;
        for(int j=0; j<3; j++)
        {
            cout << "Kolom ke-" << j+1 << " "; cin >> number[i][j];
        }
        cout << endl;
    }

    cout << "Matriks Anda " << endl;
    for(int i=0; i<2; i++)
    {
        cout << "[";
        for(int j=0; j<3; j++)
        {
            if(j == 2)
            {
                cout << number[i][j] << "";
            }
            else
            {
                cout << number[i][j] << ", ";
            }
        }
        cout << "]" << endl;
    }

    cout <<'\n';

    cout << "Matriks Setelah dikalikan dengan 5  " << endl;
    for(int i=0; i<2; i++)
    {
        cout << "[";
        for(int j=0; j<3; j++)
        {
            if(j == 2)
            {
                cout << number[i][j] * 5 << "";
            }
            else
            {
                cout << number[i][j] * 5 << ", ";
            }
        }
        cout << "]" << endl;
    }
    cout << endl;
    
    return 0;
}