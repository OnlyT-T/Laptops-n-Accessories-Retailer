#include "Product/Product.h"
#include "Product/Laptop.h"
#include "Product/Accessory.h"
#include "Inventory.h"
#include <string>

void checkInventory(Inventory*);
void searchProduct(Inventory*);
void addProduct(Inventory*);
void removeProduct();
void logOutAdmin();

int main() {
    // Create new Inventory
    Inventory* inventory = new Inventory;

    // Starting the loop of Admin Panel
    while(true) {
        // Screen 1 - Admin Menu
        cout << "-------------------------< Admin >-------------------------\n";
        cout << " 1. Check Inventory\n";
        cout << " 2. Search Product (using product's ID)\n";
        cout << " 3. Add a new product\n";
        cout << " 4. Remove an existing product\n";
        cout << " 5. Log out\n";
        cout << " *  Enter your choice: ";

        // Handling invalid input
        string input; // Define the variable named 'input' as string
        getline(cin, input); // Read the entire input as a string

        // Validate input to ensure it's a single character
        if (input.length() != 1) {
            cout << "Invalid choice. Please enter a number from 1 to 5.\n\n";
            continue;
        }
        cout << "\n-----------------------------------------------------------\n";
        int choice = input[0] - '0';
        switch (choice) {
            case 1:
                // Screen 2.1
                checkInventory(inventory);
                break;
            case 2:
                // Screen 2.2
                searchProduct(inventory);
                break;
            case 3:
                // Screen 2.3
                addProduct(inventory);
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
    delete inventory;
    return 0;
}

void checkInventory(Inventory* inv) {
    cout << "-----------------------< Inventory >-----------------------\n";
    cout << "List of products:\n";
    inv->listProduct();
    cout << endl;
}
void searchProduct(Inventory* inv) {
    cout << "-------------------------< Search >------------------------\n";
    int input;
    cout << " *  Enter the product's ID: ";
    cin >> input;
    cin.ignore();
    inv->search(input);
    cout << endl;
}
void addProduct(Inventory* inv) {
    while (true) {
        cout << "----------------------< New Product >----------------------\n";
        cout << "Adding new product to the Inventory.\n";
        cout << " 1. Laptop\n";
        cout << " 2. Accessory\n";
        cout << " 3. Back\n";
        cout << " *  Enter your choice: ";
        string input;
        getline(cin, input);

        // Handling error input
        if (input.length() != 1) {
            cout << "Invalid choice. Please try again.\n";
            continue;
        }
        int choice = input[0] - '0';
        // Distributing choices (1, 2, 3)
        if (choice == 1) { // Add new Laptop
            cout << "Adding new Laptop...\n";
            // Variables
            string name, brand, cpu, gpu;
            float price;
            int ram, storage;
            // Input Name
            cout << "Name: "; getline(cin, name);
            // Input Brand
            cout << "Brand: "; getline(cin, brand);
            // Input Price
            do {
                cout << "Price: $"; cin >> price;
                if (price < 0) cout << "ERROR: Invalid input. Please enter a positive value." << endl;
            } while (price < 0);
            // Input CPU
            cout << "CPU Info: "; cin.ignore(); getline(cin, cpu);
            // Input RAM
            do {
                cout << "The amount of RAM (in GB): "; cin >> ram;
                if (ram < 0) cout << "ERROR: Invalid input. Please enter a positive value." << endl;
            } while (ram < 0);
            // Input Storage
            do {
                cout << "The amount of Storage (in GB): "; cin >> storage;
                if (storage < 0) cout << "ERROR: Invalid input. Please enter a postive value." << endl;
            } while (storage < 0);
            // Input GPU
            cout << "GPU Info: "; cin.ignore(); getline(cin, gpu);
            // Add the new laptop into Inventory
            inv->addProduct(new Laptop(name, brand, price, cpu, ram, storage, gpu));
            cout << "\n-----------------------------------------------------------\n";
            cout <<   "-            Adding new product successfully!             -";
            cout << "\n-----------------------------------------------------------\n\n";
        } else if (choice == 2) { // Add new Accessory
            cout << "Adding new Accessory...\n";
            // Variables
            string name, brand, type;
            float price;
            bool wireless;
            // Input Name
            cout << "Name: "; getline(cin, name);
            // Input Brand
            cout << "Brand: "; cin.ignore(); getline(cin, brand);
            // Input Price
            do {
                cout << "Price: $"; cin >> price;
                if (price < 0) cout << "ERROR: Invalid input. Please input positive value." << endl;
            } while (price < 0);
            // Input Type
            cout << "Type: "; cin.ignore(); getline(cin, type);
            // Input Wireless
            int choice;
            do {
                cout << "Is the accessory wireless (0 for No, 1 for Yes)? "; cin >> choice;
                if (choice == 0) wireless = false;
                else if (choice == 1) wireless = true;
                else cout << "Invalid Choice. Please try again." << endl;
            } while (choice != 0 && choice != 1);
            // Add the new accessory into Inventory
            inv->addProduct(new Accessory(name, brand, price, type, wireless));
            cout << "\n-----------------------------------------------------------\n";
            cout <<   "-            Adding new product successfully!             -";
            cout << "\n-----------------------------------------------------------\n\n";
        } else if (choice == 3) { // Back to Admin Panel
            break;
        } else { // Handling error
            cout << "Invalid choice. Please try again.\n\n";
        }
    }
    cout << endl;
}
void removeProduct() {
    cout << "-----------------------------------------------------------\n";
    cout << "Removing an existing product from the Inventory...\n";
    cout << endl;
}
void logOutAdmin() {
    cout << "Logged Out Successfully!\n";
    exit(0);
}