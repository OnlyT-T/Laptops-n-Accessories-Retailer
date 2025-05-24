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
    const int width = 40;
    cout << "--------< Accessory Information >-------" << endl;
    cout << "=" << left << setw(width-2) <<  ("   ID: " + to_string(id)) << "=" << endl;
    cout << "=" << left << setw(width-2) <<  ("   Name: " + name) << "=" << endl;
    cout << "=" << left << setw(width-2) <<  ("   Brand: " + brand) << "=" << endl;
    stringstream ss;
    ss << fixed << setprecision(2) << price;
    cout << "=" << left << setw(width-2) <<  ("   Price: $" + to_string(price)) << "=" << endl;
    cout << "=" << left << setw(width-2) <<  ("   Type: " + type) << "=" << endl;
    cout << "=" << left << setw(width-2) << ("   Wireless: " + string(wireless ? "Yes" : "No")) << "=" << endl;
    cout << string(width, '-') << endl;
}
