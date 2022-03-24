#include<iostream>

using namespace std;

int main()

{

    int A[10];

    for(int C=0; C<10; C++) {

    cout << "A[" << C <<"] = ";

    cin >> A[C];

}

cout <<'\n';

cout <<"menampilkan nilai yang telah dimasukkan adalah" << endl;

for (int J=0; J<10; J++)
{

    cout << "Nilai yang terdapat pada elemen ke- ";

    cout << J+1 <<": "<< A[J] << endl;

}

return 0;

}