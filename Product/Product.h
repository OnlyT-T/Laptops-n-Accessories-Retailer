#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
using namespace std;

class Product;
ostream &operator << (ostream &, Product &);
//istream &operator >> (istream &, Product &);

class Product {
    private:
        static int productCount;
        int id;
        string name;
        string brand;
        float price;
    public:
        Product();
        Product(int, string, string, float);
        void setID(int id) { this->id = id; }
        void setName(string name) { this->name = name; }
        void setBrand(string brand) { this->brand = brand; }
        void setPrice(float price) { this->price = price; }
        int getID() const { return id; }
        string getName() const { return name; }
        string getBrand() const { return brand; }
        float getPrice() const { return price; }
        virtual void showInfo(bool);
        friend ostream &operator << (ostream &, Product &);
        //friend istream &operator >> (ostream &, Product &);
};

#endif