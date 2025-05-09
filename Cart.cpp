#include"cart.h"
void Cart::addItem(Product* p){
    cartItems.push_back(p);
}
void Cart::removeItem(int id){
    for (auto it = cartItems.begin(); it != cartItems.end(); ++it) {
        if ((*it)->getId() == id) {
            cartItems.erase(it);
            cout << " Item removed successfully.\n";
            return;
        }
    }
    cout << " Item not found.\n";
}

void Cart::showCart() {
    cout << "\n Cart Items:\n";
    float total = 0;
    for ( auto item : cartItems) {
        item->listDisplay();
        total += item->getPrice();
    }
    cout << " Total: $" << total << endl;
}
void Cart::checkout(){
    if (cartItems.empty()) {
        cout << " Cart is empty.\n";
        return;
    }
    showCart();
    cout << " Checkout complete! Thank you for your purchase.\n";
    cartItems.clear();
}
int Cart::count(){
    return cartItems.size();
}