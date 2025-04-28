#include "Product/Product.h"
#include "Product/Laptop.h"
#include "Product/Accessory.h"
#include "Inventory.h"
#include <string>

void checkInventory(Inventory);
void searchProduct();
void addProduct();
void removeProduct();
void logOutAdmin();

int main() {
    // Create new Inventory
    Inventory inventory;

    // Starting the loop of Admin Panel
    while(true) {
        // Screen 1 - Admin Menu
        cout << "------------------------< Admin >--------------------------\n";
        cout << " 1. Check Inventory\n";
        cout << " 2. Search Product (using product's ID)\n";
        cout << " 3. Add a new product\n";
        cout << " 4. Remove an existing product\n";
        cout << " 5. Log out\n";
        cout << "  * Enter your choice: ";

        // Handling invalid input
        string input; // Define the variable named 'input' as string
        getline(cin, input); // Read the entire input as a string

        // Validate input to ensure it's a single character
        if (input.length() != 1) {
            cout << "Invalid choice. Please enter a number from 1 to 5.\n\n";
            continue;
        }
        cout << endl;
        int choice = input[0] - '0';
        switch (choice) {
            case 1:
                // Screen 2.1
                checkInventory(inventory);
                break;
            case 2:
                // Screen 2.2
                searchProduct();
                break;
            case 3:
                // Screen 2.3
                addProduct();
                break;
            case 4:
                // Screen 2.4
                removeProduct();
                break;
            case 5:
                // Screen 0 - Main Menu (of the program)
                logOutAdmin();
                break;
            default:
                cout << "Invalid choice. Please enter a number from 1 to 5.\n";
        }
    }
    cout << "Say Bye\n";
    return 0;
}

void checkInventory(Inventory inv) {
    cout << "-----------------------------------------------------------\n";
    cout << "List of products:\n"; inv.listProduct();
    cout << endl;
}
void searchProduct() {
    cout << "-----------------------------------------------------------\n";
    cout << "Searching for a product in the Inventory...\n";
    cout << endl;
}
void addProduct() {
    cout << "-----------------------------------------------------------\n";
    cout << "Adding a new product into the Inventory...\n";
    cout << endl;
}
void removeProduct() {
    cout << "-----------------------------------------------------------\n";
    cout << "Removing an existing product from the Inventory...\n";
    cout << endl;
}
void logOutAdmin() {
    cout << "-----------------------------------------------------------\n";
    cout << "Logged Out Successfully!\n";
    exit(0);
}