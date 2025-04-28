#include "Product.h"

// Static variable
int Product::productCount = 0;

Product::Product() {
    this->id = 00;
    this->name = "";
    this->brand = "";
    this->price = 0.0;
}
Product::Product(int id, string name, string brand, float price) {
    this->id = id;
    this->name = name;
    this->brand = brand;
    this->price = price;
}
void Product::showInfo(bool) {
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Brand: " << brand << endl;
    cout << "Price: " << price << endl;
}
void Product::listDisplay() {
    cout << id << ". " << name << ", " << brand << " | $" << price << endl;
}
// cout built function (for listing products inside Inventory)
// ostream &operator << (ostream &strm, const Product &obj) {
//     strm << obj.getID() << ". " << obj.getName() << ", " << obj.getBrand() << " | $" << obj.getPrice() << endl;
// }
// cin built function
// istream &operator >> (ostream &strm, const Product &obj) {

// }