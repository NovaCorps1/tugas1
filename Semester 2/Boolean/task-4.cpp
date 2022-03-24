#include <iostream>
using namespace std;

int main()
{   
    // Initialize variables
    int a,b;
    bool result;

    // Getting inputs
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    // Results
    cout << "\nResults\n\n";

    //not
    cout << "not" << endl; 
    result = !(a==2); // if a not equal to 2 then return true
    printf("!(a==2) : %d \n\n", result);

    //and
    cout << "and" << endl;
    result = (a==2) && (b==3); // if both condition met then return true
    printf("!(a==2) && (b==3) : %d \n\n", result);

    //or
    cout << "or" << endl;
    result = (a == 2) || (b == 2); // if one of the condition met then return true
    printf("(a == 2) || (b == 2) : %d \n\n", result);

    //less than
    cout << "less than" << endl;
    result = (a < 3); //  if a < 3 then return true
    printf("(a < 3) : %d\n\n", result);

    //greater than
    cout << "greater than" << endl;
    result = (a > 2); // if a > 2 then return true
    printf("(a > 2) : %d\n\n", result);

    //less than or equal to
    cout << "less than or equal to"  << endl;
    result = (a <= 3); // if a <= 3 then return true
    printf("(a <= 3) : %d\n\n", result);

    //greater than or equal to
    cout << "greater than or equal to" << endl;
    result = (a >= 2); // if a >= 2 then return true
    printf("(a >= 2) : %d", result);
}