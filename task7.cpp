#include <iostream>
using namespace std;

int main() {
    int length;
    int first = 0, second = 1, next;
    
    cout << "Enter the length of the Fibonacci series: ";
    cin >> length;
    
    if(length >= 1) {
        cout << first;  
    }
    
    if(length >= 2) {
        cout << ", " << second;  
    }
    
    for(int i = 3; i <= length; i++) {
        next = first + second;
        cout << ", " << next;
        first = second;
        second = next;
    }
    
    cout << endl;
    
    return 0;
}