#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;
    int digit;

    cout << "Enter a number: ";
    cin >> number;
    
    if(number < 0) {
        number = -number;
    }
    
    while(number > 0) {
        digit = number % 10;  
        sum = sum + digit;     
        number = number / 10;   
    }
    
    cout << "Sum of digits: " << sum << endl;
    
    return 0;
}