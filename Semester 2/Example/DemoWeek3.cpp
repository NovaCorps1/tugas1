#include <iostream>
using namespace std;
int main() 

{
    system ("Color 3");
   
    int a,b ;
    bool hasil;
    cout << "Masukkan nilai a: "; 
    cin >> a;
    cout << "Masukkan nilai b: "; 
    cin >> b;

    cout << "NOT" << endl;
    hasil = (a != 6);
    cout << hasil << endl;
    hasil = (b != 2);
    cout << hasil << endl;

    cout << "lebih dari" << endl;
    hasil = (a > 6);
    cout << hasil << endl;
    hasil = (b > 10);
    cout << hasil << endl;

    cout << "lebih dari sama dengan" << endl;
    hasil = (a >= 6);
    cout << hasil << endl;
    hasil = (b >= 7);
    cout << hasil << endl;

    cout << "kurang dari" << endl;
    hasil = (a < 6);
    cout << hasil << endl;
    hasil = (b < 8);
    cout << hasil << endl;

    cout << "kurang dari sama dengan" << endl;
    hasil = (a <= 6);
    cout << hasil << endl;
    hasil = (b <= 10);
    cout << hasil << endl;

    //Operator AND
    cout << "Operator AND" << endl;
    hasil = (a == 6) && (b == 9); //True and True = 1
    cout << hasil << endl;
    hasil = (a == 6) && (b == 5); //True and False = 0
    cout << hasil << endl;
    hasil = (a == 4) && (b == 9); //False and True = 0
    cout << hasil << endl;
    hasil = (a == 5) && (b == 6); //False and False = 0
    cout << hasil << endl;

    //Operator OR
    cout << "Operator OR" << endl;
    hasil = (a == 6) || (b == 9); //True and True = 1
    cout << hasil << endl;
    hasil = (a == 6) || (b == 5); //True and False = 1
    cout << hasil << endl;
    hasil = (a == 4) || (b == 9); //False and True = 1
    cout << hasil << endl;
    hasil = (a == 5) || (b == 6); //False and False = 0
    cout << hasil << endl;


    return 0;
}