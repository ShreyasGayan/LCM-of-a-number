#include <iostream>
using namespace std;
int gcd(int a, int b);

int main() {
    int firstNumber;
    int secondNumber;
    cout << "Enter first Number: ";
    cin >> firstNumber;
    cout << "Enter second Number: ";
    cin >> secondNumber;

    int GCD = gcd(firstNumber, secondNumber);
    
    cout << "LCM is: " << (firstNumber*secondNumber) / GCD << endl;
}

int gcd(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) {
            a %= b;
        }
        else if (b > a) {
            b %= a;
        }
    }
    if (a == 0) {
        return b;
    } else {
        return a;
    }
}