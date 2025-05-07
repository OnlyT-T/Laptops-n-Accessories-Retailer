#include"user.h"
void User::userMenu(Inventory* inv) {
    int choice;
    while (true) {
        cout << "\n User Menu:\n";
        cout << "1. View Products\n"
        << "2. Add to Cart\n"
        << "3. View Cart\n"
        << "4. Checkout\n"
        << "5. Logout\n"
        << "Choice: ";
        cin >> choice;
        if (choice == 1) {
            inv->listProduct();
        }
        else if (choice == 2) {
            int id;
            cout << "Enter Product ID to add to cart: ";
            cin >> id;
            Product* p= inv->getProductById(id);
            if(p!=nullptr){
            cart.addItem(p);
            cout<<"--> Product added to cart successfully!\n";
            }
            else{
            cout<<"--> Cannot found product !\n";
            }

        }
        else if (choice == 3) {
            cart.showCart();
        }
        else if (choice == 4) {
            cart.checkout();
        }
        else if (choice == 5) {
            cout << "Logged Out Successfully!\n";
            break;
        }
    }
}