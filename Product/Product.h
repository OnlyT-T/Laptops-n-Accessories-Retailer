#ifndef PRODUCT_H
#define PRODUCT_H
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

class Product {
    protected:
        static int productCount;
        string name;
        string brand;
        float price;
        int id;
    public:
        Product();
        Product(int, string, string, float);
        virtual ~Product();
        void setID(int id) { this->id = id; }
        void setName(string name) { this->name = name; }
        void setBrand(string brand) { this->brand = brand; }
        void setPrice(float price) { this->price = price; }
        int getId() const { return id; }
        string getName() const { return name; }
        string getBrand() const { return brand; }
        float getPrice() const { return price; }
        int getCount() const { return productCount; }
        virtual void showInfo()=0;
        void listDisplay();
        friend ostream& operator<<(ostream& , const Product&);
};

#endif