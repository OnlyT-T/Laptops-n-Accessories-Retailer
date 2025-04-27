#include "Accessory.h"

Accessory::Accessory() : Product() {
    this->type = "";
    this->wireless = false;
}
Accessory::Accessory(int id, string name, string brand, float price, string type, bool wireless) : Product(id, name, brand, price) {
    this->type = type;
    this->wireless = wireless;
}
void Accessory::showInfo(bool showDetail = false) {
    Product::showInfo(showDetail);
    if (showDetail) {
        //cout << "---< Accessory Information >---" << endl;
        cout << "Type: " << type << endl;
        cout << "Wireless: ";
        if (wireless) cout << "Yes";
        else cout << "No";
    }
}