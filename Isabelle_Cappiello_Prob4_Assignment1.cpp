#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double side;
    cout << "Enter the side: ";
    cin >> side;
    cout << "The area of the hexagon is " << setprecision(4) << (6*pow(side,2))/(4*tan(M_PI/6));
    return 0;
}