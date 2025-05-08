#include "Product.h"

// Static variable
int Product::productCount = 0;

Product::Product() {
    // this->id = 0;
    // this->name = "";
    // this->brand = "";
    // this->price = 0.0;
    // productCount++;
}
Product::Product(int id,string name, string brand, float price) {
    this->id = productCount+1;
    this->name = name;
    this->brand = brand;
    this->price = price;

}
void Product::listDisplay() {
    cout << id << ". " << name << ", " << brand << " | $" << price << endl;
}