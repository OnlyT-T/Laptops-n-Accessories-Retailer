#include"User.h"

void User::userMenu(Inventory* inv) {
    int choice;
    while (true) {
        cout << "--------------------------< User >--------------------------\n";
        cout << " 1. View Products\n"
             << " 2. Add to Cart\n"
             << " 3. Remove items from cart\n"
             << " 4. View Cart\n"
             << " 5. Checkout\n"
             << " 6. Logout\n"
             << " * Enter your choice: ";
        cin >> choice;
        if (choice == 1) {
            cout << "--------------------------< Shop >--------------------------\n";   
            inv->listProduct();
        }
        else if (choice == 2) {
        cout << "-----------------------< Add To Cart >----------------------\n";
            inv->listProduct();
            int id;
            cout << "Enter Product ID to add to cart: ";
            cin >> id;
            Product* p= inv->getProductById(id);
            if(p!=nullptr){
            cart.addItem(p);
            cout<<"--> Product added to cart successfully!\n";
            }
            else {
                cout<<"--> Cannot found product !\n";
            }

        }
        else if(choice==3){
        cout << "----------------------< Remove Item >-----------------------\n";

            cart.showCart();
            if(cart.count()!=0){
             int id;
            cout << "Enter Product ID to remove from cart: ";
            cin >> id;cin.ignore();
            cart.removeItem(id);
            }
            else{cout<<"There is no avalable item to remove!\n";}
        }
        else if (choice == 4) {
        cout << "--------------------------< Cart >--------------------------\n";   
        
            cart.showCart();
        }
        else if (choice == 5) {
        cout << "------------------------< Checkout >------------------------\n";

            cart.checkout();
        }
        else if (choice == 6) {
            cout << "Logged Out Successfully!\n";
            break;
        }
    }
}