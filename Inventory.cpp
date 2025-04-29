#include "Inventory.h"

Inventory::Inventory() {
    Product* laptop0 = new Laptop(1000, "None", "None", 0.0, "None", 0, 0, "None");
    Product* accessory0 = new Accessory(1100, "None", "None", 0.0, "None", false);
    this->products.push_back(laptop0);
    this->products.push_back(accessory0);
}
Inventory::Inventory(vector<Product*> products) {
    this->products = products;
}
Inventory::~Inventory() {
    if (!products.empty()) {
        for (auto p : products) {
            delete p;
        }
        products.clear();
    }
}
void Inventory::addProduct(Product* p) {
    products.push_back(p);
}
bool Inventory::removeProduct(int id) {
    for (auto p = products.begin(); p != products.end(); ++p) { // auto here is actually vector<Product*>::iterator
        if ((*p)->getID() == id) {
            products.erase(p);
            return true;
        } else return false;
    }
}
void Inventory::listProduct() {
    for (auto p = products.begin(); p != products.end(); p++) {
        (*p)->listDisplay();
    }
}
void Inventory::search(int id) {
    bool found = false;
    for (auto p = products.begin(); p != products.end(); ++p) {
        if ((*p)->getID() == id) {
            cout << "--> Here's the product you're looking for:" << endl;
            (*p)->showInfo(true);
            found = true;
        }
    }
    if (!found) cout << "--> Unable to find the product you're looking for. Please try again." << endl;
}