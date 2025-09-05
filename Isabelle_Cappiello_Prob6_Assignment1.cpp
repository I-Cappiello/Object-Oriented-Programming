#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer between 0 and 1000000: ";
    cin >> num;
    int sum;
    do{
        sum = 0;
        while(num > 0){
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    } while (num > 10);
    cout << "The sum of the digits of the entered number repeatedly added until the result only has one digit is " << sum;
    return 0;
}