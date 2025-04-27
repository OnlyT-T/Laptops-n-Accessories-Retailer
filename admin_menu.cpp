#include "Product/Product.h"
#include "Product/Laptop.h"
#include "Product/Accessory.h"
#include "Inventory.h"
#include <string>

void inputChoice(const int &);
void adminLogin();
void customerLogin();
void exitProgram();

int main() {
    while(true) {
        cout << " -----------------------------------------------------------\n";
        cout << " - Welcome to the 'Laptop & Accessories Retailer' Program. -\n";
        cout << " ------------------------< Menu >---------------------------\n";
        cout << " 1. Login as Admin.\n";
        cout << " 2. Login as Customer.\n";
        cout << " 3. Exit Program.\n";
        cout << " * Enter your choice: ";

        // Handling invalid input
        string input; // Define the variable named 'input' as string
        getline(cin, input); // Read the entire input as a string

        // Validate input to ensure it's a single character
        if (input.length() != 1) {
            cout << "Invalid choice. Please enter a number from 1 to 3.\n";
            continue;
        }
        int choice = input[0] - '0';
        inputChoice(choice);
    }

    return 0;
}

void inputChoice(const int &choice) {
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
            cout << "Invalid choice. Please enter a number from 1 to 3.\n";
    }
}

void adminLogin() {
    cout << "-------------------------------------------------------\n";
    cout << "Admin login functionality goes here.\n";
}
void customerLogin() {
    cout << "-------------------------------------------------------\n";
    cout << "Customer login functionality goes here.\n";
}
void exitProgram() {
    cout << "-------------------------------------------------------\n";
    cout << "Exiting the program. Goodbye!\n";
    exit(0);
}