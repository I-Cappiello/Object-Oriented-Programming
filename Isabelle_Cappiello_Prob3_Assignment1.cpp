#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x;
    int remain;
    int quotient;
    
    cout << "Enter an integer number to see if the given number is divisible by 4 or not: ";
    cin >> x;
    if(x < 0){
      cout << "This program does not accept negative numbers." << endl;
    }
    else if (x > 100){
        cout << "The entered number is greater than 100 and the square root of the number is " << sqrt(x) << endl;
    }
    else{
        if(x%4==0){
            cout << "The given number " << x << " is divisible by 4" << endl;
            remain = 0;
        }
        else{
            cout << "The given number " << x << " is divisible by 4" << endl;
            remain = x % 4;
        }
        quotient = int(x/4);
        cout << "Quotient: " << quotient << " and Remainder: " << remain;
    }

    return 0;
}