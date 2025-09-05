#include <iostream>
using namespace std;

int main() {
    string str;
    string result;
    cout << "Enter a string: ";
    getline(cin,str);
    for (int i = 1;(i<str.length());i+=2){
        result += str[i];
    }
    cout << result;
    return 0;
}