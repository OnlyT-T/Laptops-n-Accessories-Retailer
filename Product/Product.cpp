#include "Product.h"

// Static variable
int Product::productCount = 0;

Product::Product() {}
Product::Product(int id,string name, string brand, float price) {
    this->id = productCount+1;
    this->name = name;
    this->brand = brand;
    this->price = price;

}
ostream& operator<<(ostream& out, const Product& product) {
    out << product.id << ". " << product.name << ", " << product.brand << " | $" << product.price;
    return out;
}

void Product::listDisplay() {
    cout << *this << endl;
}