#include <iostream>
using namespace std;


int main(){

    // Declare variables
    int end_xloop = false,
        added, substracted, multiplied, divided, modded;


    // find x
    for(int x = 1; x > 0; x++){

        // find y
        for (int y = 1; y <= 1000; y++){
            
            // apply formula
            added = y + x;
            substracted = added - x;
            multiplied = substracted * x;
            divided = multiplied / x;
            modded = divided % x;

            // give several conditions
            if(added == 15 && substracted == 10 && multiplied == 50 && divided == 10 && modded == 0){ 
                
                // set end_loop to true
                end_xloop = true;

                // print result

                cout << "x = " << x << endl;
                cout << "y = " << y << endl;

                cout << "Hasil y += x adalah " << added << endl;

                cout << "Hasil y -= x adalah " << substracted << endl;

                cout << "Hasil y *= x adalah " << multiplied << endl;

                cout << "Hasil y /= x adalah " << divided << endl;

                cout << "Hasil y %= x adalah " << modded << endl;

                break;  
            }
        }

        // Give condition for loop to stop if x match
        if (end_xloop){
            break;
        }

    }

    return 0;
}