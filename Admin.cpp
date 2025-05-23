#include "Admin.h"
#include "Product/Laptop.h"
#include "Product/Accessory.h"
#include <iostream>
#include <string>

using namespace std;

void Admin::adminPanel(Inventory* inventory) {
    while(true) {
        cout << "-------------------------< Admin >-------------------------\n";
        cout << " 1. Check Inventory\n";
        cout << " 2. Search Product (using product's ID)\n";
        cout << " 3. Add a new product\n";
        cout << " 4. Remove an existing product\n";
        cout << " 5. Log out\n";
        cout << " *  Enter your choice: ";

        string input;
        getline(cin, input);

        if (input.length() != 1) {
            cout << "Invalid choice. Please enter a number from 1 to 5.\n\n";
            continue;
        }
        cout << "\n-----------------------------------------------------------\n";
        int choice = input[0] - '0';
        switch (choice) {
            case 1: checkInventory(inventory); break;
            case 2: searchProduct(inventory); break;
            case 3: addProduct(inventory); break;
            case 4: removeProduct(inventory); break;
            case 5:  cout << "Logged Out Successfully!\n";
                        return;
            default: cout << "Invalid choice. Please try again.\n";
        }
    }
}

void Admin::checkInventory(Inventory* inv) {
    cout << "-----------------------< Inventory >-----------------------\n";
    cout << "List of products:\n";
    inv->listProduct();
    cout << endl;
}

void Admin::searchProduct(Inventory* inv) {
    cout << "-------------------------< Search >------------------------\n";
    int id=0;
    inv->listProduct();
    cout << " *  Enter the product's ID: ";
    cin >> id;
    cin.ignore();
    Product* p= inv->getProductById(id);
    if(p!=nullptr){
        cout << "--> Here's the product you're looking for:" << endl;
        p->showInfo();
    }
    else{
        cout<<"--> Cannot found product!\n";
    }
    cout << endl;
}

void Admin::addProduct(Inventory* inv) {
    while (true) {
        cout << "--------------------------< Add >--------------------------\n";
        cout << "Adding new product to the Inventory.\n";
        cout << " 1. Laptop\n";
        cout << " 2. Accessory\n";
        cout << " 3. Back\n";
        cout << " *  Enter your choice: ";
        string input;
        getline(cin, input);

        if (input.length() != 1) {
            cout << "Invalid choice. Please try again.\n";
            continue;
        }
        int choice = input[0] - '0';

        if (choice == 1) {
            string name, brand, cpu, gpu;
            float price;
            int ram, storage;
            int id;

            cout << "Name: "; getline(cin, name);
            cout << "Brand: "; getline(cin, brand);
            do {
                cout << "Price: $"; cin >> price;cin.ignore();
                if (price < 0) cout << "ERROR: Enter a positive value.\n";
            } while (price < 0);

            cout << "CPU Info: "; cin.ignore(); getline(cin, cpu);
            do {
                cout << "RAM (GB): "; cin >>ram;
                if (ram < 0) cout << "ERROR: Enter a positive value.\n";
            } while (ram < 0);

            do {
                cout << "Storage (GB): "; cin >> storage;
                if (storage < 0) cout << "ERROR: Enter a positive value.\n";
            } while (storage < 0);

            cout << "GPU Info: "; cin.ignore(); getline(cin, gpu);
            
            inv->addProduct(new Laptop(id,name, brand, price, cpu, ram, storage, gpu));
            cout << "-> Laptop added successfully!\n\n";
        } else if (choice == 2) {
            string name, brand, type;
            float price;
            bool wireless;
            int id=0;

            cout << "Name: "; getline(cin, name);
            cout << "Brand: "; getline(cin, brand);
            do {
                cout << "Price: $"; cin >> price;
                cin.ignore();
                if (price < 0) cout << "ERROR: Enter a positive value.\n";
            } while (price < 0);

            cout << "Type: ";  getline(cin, type);

            int option;
            do {
                cout << "Is it wireless (0 = No, 1 = Yes)? "; cin >> option;cin.ignore();
                if (option == 0) wireless = false;
                else if (option == 1) wireless = true;
                else cout << "Invalid choice.\n";
            } while (option != 0 && option != 1);

            inv->addProduct(new Accessory(id,name, brand, price, type, wireless));
            cout << "-> Accessory added successfully!\n\n";
        } else if (choice == 3) {
            break;
        } else {
            cout << "Invalid choice. Please try again.\n";
        }
    }
}

void Admin::removeProduct(Inventory* inv) {
    cout << "-------------------------< Remove >------------------------\n";
    inv->listProduct();
    if(inv->count()!=0){
    int input;
    cout << " * Enter the product's ID: ";
    cin >> input;
    cin.ignore();
    if (inv->removeProduct(input)) {
        cout << "-> Removed product with ID " << input << " successfully!\n";
    } else {
        cout << "-> No product with ID " << input << " found.\n";
    }
    }
}

void Admin::logOutAdmin() {
    cout << "Logged Out Successfully!\n";
    return;
}
