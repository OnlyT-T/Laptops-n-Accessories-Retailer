#include "Shop.h"
#include "Admin.h"
#include "User.h"

Shop* shop=new Shop();

void inputChoice(int);
void adminLogin();
void customerLogin();
void exitProgram();

int main() {
    // Infinite Loop
    while(true) {
        cout << "\n ----------------------------------------------------------\n";
        cout << "| Welcome to the 'Laptop & Accessories Retailer' Program.  |\n";
        cout << " ------------------------< Menu >--------------------------\n";
        cout << " 1. Login as Admin.\n";
        cout << " 2. Login as Customer.\n";
        cout << " 3. Exit Program.\n";
        cout << " *  Enter your choice: ";

        // Handling invalid input
        string input; // Define the variable named 'input' as string
        getline(cin, input); // Read the entire input as a string

        // Validate input to ensure it's a single character
        if (input.length() != 1) {
            cout << "-ERROR- Invalid choice. Please enter a number from 1 to 3.\n";
            continue;
        }
        int choice = input[0] - '0';
        inputChoice(choice);
    }
    return 0;
}

void inputChoice(int choice) {
    cout << endl << string(60, '-') << endl;
    switch (choice) {
        case 1: 
            adminLogin();
            break;
        case 2:
            customerLogin();
            break;
        case 3:
            exitProgram();
            break;
        default:
            cout << "-ERROR- Invalid choice. Please enter a number from 1 to 3.\n";
    }
}

void adminLogin() {
    Admin admin;
    admin.adminPanel(shop);
}
void customerLogin() {
    User user;
    user.userMenu(shop);
}
void exitProgram() {
    cout << " < Exiting the program. Goodbye! >" << endl;
    cout << string(60, '-') << endl;
    exit(0);
}
