#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double money;
    int targetYear;
    int age = 18;  

    cout << "Enter inherited money: ";
    cin >> money;
    cout << "Enter year until which to live: ";
    cin >> targetYear;
    
    double remainingMoney = money;
    
    for(int year = 1800; year <= targetYear; year++) {
        if(year % 2 == 0) {  
            remainingMoney -= 12000;
        }
        else if(year % 2 != 0) {  
            remainingMoney -= (12000 + 50 * age);
        }
        age++;  
    }
    
    cout << fixed << setprecision(2);
    if(remainingMoney >= 0) {
        cout << "Yes! He will live a carefree life and will have " 
             << remainingMoney << " dollars left." << endl;
    }
    else if(remainingMoney < 0) {
        cout << "He will need " << -remainingMoney << " dollars to survive." << endl;
    }
    
    return 0;
}