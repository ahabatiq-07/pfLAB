
#include <iostream>
using namespace std;

int main() {
    int age, toyPrice;
    double washingMachinePrice;
    double money = 0;
    int toys = 0;
    int moneyGift = 10;
    
    cout << "Enter Lilly's age: ";
    cin >> age;
    cout << "Enter the price of the washing machine: ";
    cin >> washingMachinePrice;
    cout << "Enter the unit price of each toy: ";
    cin >> toyPrice;
    
    for(int birthday = 1; birthday <= age; birthday++) {
        if(birthday % 2 == 0) {  
            money += moneyGift;
            money--;              
            moneyGift += 10;       
        }
        else {  
            toys++;
        }
    }
    
    money += toys * toyPrice;
    
    if(money >= washingMachinePrice) {
        cout << "Yes!" << endl;
        cout << money - washingMachinePrice << endl;
    }
    else {
        cout << "No!" << endl;
        cout << washingMachinePrice - money << endl;
    }
    
    return 0;
}
