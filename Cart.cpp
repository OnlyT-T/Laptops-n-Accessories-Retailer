#include "Cart.h"

void Cart::addItem(Product* p){
    cartItems.push_back(p);
}
void Cart::removeItem(int id){
    for (auto it = cartItems.begin(); it != cartItems.end(); ++it) {
        if ((*it)->getId() == id) {
            cartItems.erase(it);
            cout << "--> Item removed successfully.\n";
            return;
        }
    }
    cout << "--> Item not found.\n";
}

void Cart::showCart() {
    cout << "Cart Items:\n";
    float total = 0;
    if(cartItems.size()==0){
        cout << "Cart is empty!\n";
    }
    for ( auto item : cartItems) {
        item->listDisplay();
        total += item->getPrice();
    }
    stringstream ss;
    ss << fixed << setprecision(2) << total;
    string strTotal = "| Total: $" + ss.str() + " |";
    cout << setw(3) << "" << string(strTotal.length()-2, '-') << endl;
    cout << setw(2) << "" << strTotal << endl;
    cout << setw(3) << "" << string(strTotal.length()-2, '-') << endl;
}
void Cart::checkout(){
    if (cartItems.empty()) {
        cout << "Cart is empty!\n";
        return;
    }
    showCart();
    cout << "--> Checkout complete. Thank you for your purchase!\n";
    cartItems.clear();
}
int Cart::count(){
    return cartItems.size();
}