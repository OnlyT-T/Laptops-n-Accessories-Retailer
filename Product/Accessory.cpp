#include "Accessory.h"

// Static variable
// int Accessory::accessoryCount = 0;

Accessory::Accessory() : Product() {}
 
Accessory::Accessory(int id,string name, string brand, float price, string type, bool wireless) : Product(id,name, brand, price) {
    this->id = productCount+1;
    this->type = type;
    this->wireless = wireless;
    productCount++;
}
void Accessory::showInfo() {
        cout << "---< Accessory Information >---" << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Brand: " << brand << endl;
        cout << "Price: $" << price << endl;
        cout << "Type: " << type << endl;
        cout << "Wireless: ";
        if (wireless) cout << "Yes";
        else cout << "No";
        cout << endl; 
}
