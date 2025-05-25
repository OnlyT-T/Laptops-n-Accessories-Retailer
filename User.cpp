#include "User.h"

void User::userMenu(Shop* shop) {
    while (true) {
        cout << "\n-------------------------<< User >>-------------------------\n";
        cout << " 1. View Products\n"
             << " 2. View Cart\n"
             << " 3. Add to Cart\n"
             << " 4. Remove items from Cart\n"
             << " 5. Checkout\n"
             << " 6. Log out\n"
             << " *  Enter your choice: ";
        string input;
        getline(cin, input);
        
        if (input.length() != 1) {
            cout << "-ERROR- Invalid choice. Please enter a number from 1 to 6.\n";
            continue;
        }

        cout << endl;
        int choice = input[0] - '0';
        if (choice == 1) {
            cout << string(60, '-') << endl;
            cout << "\n--------------------------< Shop >--------------------------\n";   
            shop->listProduct();
        }
        else if (choice == 2) {
            cout << string(60, '-') << endl;
            cout << "\n--------------------------< Cart >--------------------------\n";   
            cart.showCart();
        }
        else if(choice == 3){
            cout << string(60, '-') << endl;
            cout << "\n-----------------------< Add To Cart >----------------------\n";
            shop->listProduct();
            if(shop->count()!=0){
                int id;
                cout << "Enter Product ID to add to cart: ";
                cin >> id; cin.ignore();
                Product* p= shop->getProductById(id);
                if(p!=nullptr){
                    cart.addItem(p);
                    cout << "--> Product added to cart successfully!\n";
                }
                else {
                    cout << "--> Cannot found product!\n";
                }
            }
        }
        else if (choice == 4) {
            cout << string(60, '-') << endl;
            cout << "\n----------------------< Remove Item >-----------------------\n";
            cart.showCart();
            if(cart.count()!=0){
                int id;
                cout << "Enter Product ID to remove from cart: ";
                cin >> id;cin.ignore();
                cart.removeItem(id);
            }
            else {
                cout << "--> There is no available item to remove!\n";
            }
        }
        else if (choice == 5) {
            cout << string(60, '-') << endl;
            cout << "\n------------------------< Checkout >------------------------\n";
            cart.checkout();
        }
        else if (choice == 6) {
            cout << string(60, '-') << endl;
            cout << "  < Logged Out Successfully! >\n";
            cout << string(60, '-') << endl;
            break;
        }
        else {
            cout << "-ERROR- Invalid choice. Please enter a number from 1 to 6.\n";
        }
        cout << endl << string(60, '-') << endl;
    }
}