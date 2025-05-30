#include "Accessory.h"

Accessory::Accessory() : Product() {}
Accessory::Accessory(int id, string name, string brand, float price, string type, bool wireless) : Product(id, name, brand, price) {
    this->type = type;
    this->wireless = wireless;
}
Accessory::~Accessory() {}
void Accessory::showInfo() {
    const int width = 40;
    cout << "--------< Accessory Information >-------" << endl;
    cout << "=" << left << setw(width-2) <<  ("   ID: " + to_string(id)) << "=" << endl;
    cout << "=" << left << setw(width-2) <<  ("   Name: " + name) << "=" << endl;
    cout << "=" << left << setw(width-2) <<  ("   Brand: " + brand) << "=" << endl;
    stringstream ss;
    ss << fixed << setprecision(1) << price;
    string strPrice = ss.str();
    cout << "=" << left << setw(width-2) <<  ("   Price: $" + strPrice) << "=" << endl;
    cout << "=" << left << setw(width-2) <<  ("   Type: " + type) << "=" << endl;
    cout << "=" << left << setw(width-2) << ("   Wireless: " + string(wireless ? "Yes" : "No")) << "=" << endl;
    cout << string(width, '-') << endl;
}
