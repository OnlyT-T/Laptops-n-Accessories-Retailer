#ifndef SHOP_H
#define SHOP_H
#include "Product/Product.h"
#include "Product/Laptop.h"
#include "Product/Accessory.h"
#include <vector>

class Shop {
    private:
        vector<Product*> products;
    public:
        Shop();
        Shop(vector <Product*>);
        ~Shop();
        void addProduct(Product*);
        bool removeProduct(int);
        void listProduct();
        //void search(int);
        Product* getProductById(int);
        int count() const {
            return products.size();
        }
};

#endif