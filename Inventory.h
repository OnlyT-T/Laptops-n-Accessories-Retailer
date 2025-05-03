#ifndef INVENTORY_H
#define INVENTORY_H
#include "Product/Product.h"
#include "Product/Laptop.h"
#include "Product/Accessory.h"
#include <vector>

class Inventory {
    private:
        vector<Product*> products;
    public:
        Inventory();
        Inventory(vector <Product*>);
        ~Inventory();
        void addProduct(Product*);
        bool removeProduct(int);
        void listProduct();
        void search(int);
};

#endif