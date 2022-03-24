#include <iostream> 
using namespace std;

int sum(int num1, int num2, int num3, int num4);
double average(double num1, double num2, double num3, double num4);

int main(void){ int num1 = 10; int num2 = 15; int num3 = 33; int num4 = 44; int hasilSum;
double hasilAverage;

hasilSum = sum(num1, num2, num3, num4); hasilAverage = average(num1, num2, num3, num4); cout << "The sum of all numbers is: " << hasilSum;
cout << "\nThe average of all numbers is: " << hasilAverage;

return 0;
}

int sum(int num1, int num2, int num3, int num4){ int jumlah;
jumlah = num1 + num2 + num3 + num4;

return jumlah;
}

double average(double num1, double num2, double num3, double num4){ double jumlah;
jumlah = (num1 + num2 + num3 + num4)/4;

return jumlah;
}