#include <iostream>
using namespace std;

int main() {
    int num1, num2, a, b, temp;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    
    a = num1;
    b = num2;
    
    while(b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    
    int gcd = a;
    int lcm = (num1 * num2) / gcd;
    
    cout << "GCD: " << gcd << endl;
    cout << "LCM: " << lcm << endl;
    
    return 0;
}