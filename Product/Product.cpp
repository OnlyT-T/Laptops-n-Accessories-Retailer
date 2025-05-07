#include "Product.h"

// Static variable
int Product::productCount = 0;

Product::Product() {
    this->id = 0;
    this->name = "";
    this->brand = "";
    this->price = 0.0;
    productCount++;
}
Product::Product(string name, string brand, float price) {
    this->id = 0;
    this->name = name;
    this->brand = brand;
    this->price = price;
    productCount++;
}
void Product::listDisplay() {
    cout << id << ". " << name << ", " << brand << " | $" << price << endl;
}