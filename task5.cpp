#include <iostream>
using namespace std;

int main() {
    int num = 1, sum = 0;
    
    while(num <= 100) {
        sum += num; 
        num++;     
    }
    
    cout << "Sum: " << sum << endl;
    
    return 0;
}