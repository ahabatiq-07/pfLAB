#include <iostream>
using namespace std;

int main() {
    int number, digit, count = 0;
    int lastDigit;
    
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the digit to check: ";
    cin >> digit;
    
    if(number < 0) {
        number = -number;
    }
    
    if(number == 0 && digit == 0) {
        count = 1;
    }
    else {
        
        while(number > 0) {
            lastDigit = number % 10;  
            if(lastDigit == digit) {
                count++;
            }
            number = number / 10;  
        }
    }
    
    cout << "Frequency: " << count << endl;
    
    return 0;
}