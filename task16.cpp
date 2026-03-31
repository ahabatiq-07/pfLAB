#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2;
    
    do {
        
        cout << "\n--- Simple Calculator ---\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Clear Screen\n";
        cout << "6. Exit\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;
        
        if (choice == 6) {
            cout << "Exiting Calculator. Goodbye!" << endl;
            break;
        }
        
        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }
        
        if (choice == 1) {
            cout << "Result: " << num1 + num2 << endl;
        }
        else if (choice == 2) {
            cout << "Result: " << num1 - num2 << endl;
        }
        else if (choice == 3) {
            cout << "Result: " << num1 * num2 << endl;
        }
        else if (choice == 4) {
            if (num2 == 0) {
                cout << "Error: Cannot divide by zero!" << endl;
            }
            else {
                cout << "Result: " << num1 / num2 << endl;
            }
        }
        else if (choice == 5) {
            cout << "Screen cleared." << endl;
        }
        else if (choice < 1 || choice > 6) {
            cout << "Invalid choice! Please enter 1-6." << endl;
        }
        
    } while (true);
    
    return 0;
}