#include <iostream>
using namespace std;

int main() {
    int choice;
    string books[100];  
    int bookCount = 0;   
    string bookName;
    
    choice = 0;  
    
    while (choice != 5) {

        cout << "\n--- Library System ---\n";
        cout << "1. Add Book\n";
        cout << "2. View Book\n";
        cout << "3. Borrow Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        
        if (choice == 1) {
            cout << "Enter book name: ";
            cin >> bookName;
            books[bookCount] = bookName;
            bookCount++;
            cout << "You added a book: " << bookName << endl;
        }
        else if (choice == 2) {
            if (bookCount == 0) {
                cout << "No books in the library." << endl;
            }
            else {
                cout << "Books in library:\n";
                for (int i = 0; i < bookCount; i++) {
                    cout << i+1 << ". " << books[i] << endl;
                }
            }
        }
        else if (choice == 3) {
            cout << "Enter book name to borrow: ";
            cin >> bookName;
            
            bool found = false;
            int i = 0;
            while (i < bookCount) {
                if (books[i] == bookName) {
                    found = true;
                    int j = i;
                    while (j < bookCount - 1) {
                        books[j] = books[j + 1];
                        j++;
                    }
                    bookCount--;
                    cout << "You borrowed: " << bookName << endl;
                    break;
                }
                i++;
            }
            
            if (!found) {
                cout << "Book not found!" << endl;
            }
        }
        else if (choice == 4) {
            cout << "Enter book name to issue: ";
            cin >> bookName;
            cout << "Book issued: " << bookName << endl;
        }
        else if (choice == 5) {
            cout << "Exiting Library System. Goodbye!" << endl;
        }
        else {
            cout << "Invalid choice! Please enter 1-5." << endl;
        }
        
    }  
    
    return 0;
}