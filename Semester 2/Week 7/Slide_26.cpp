#include <iostream>
using namespace std;
int main(){
    int na, nh;
     cout << "Berapa nilai akhir anda?" << endl;
     cout << "Jawab : " ;
     cin >> na;

     switch (na){
         case 100 : cout << " Sangat Memuaskan" << endl;
         break;

         case 90 : cout << " Memuaskan " << endl;
         break;

         case 80 : cout << " Bagus " << endl;
         break;

         case 70 : cout << " Lumayan Bagus " << endl;
         break;

         case 60 : cout << "Cukup" << endl;
         break;

         case 50 : cout << " Kurang " << endl;
         break;

         default : cout << "Sangat Kurang" << endl;
         break;
     }
     return 0;
}