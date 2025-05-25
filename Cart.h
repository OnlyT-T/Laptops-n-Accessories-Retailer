#ifndef CART_H
#define CART_H
#include "Product/Product.h"
#include "Product/Laptop.h"
#include "Product/Accessory.h"

class Cart {
    private:
        vector<Product*>cartItems;
    public:
        Cart();
        Cart(vector<Product*>);
        ~Cart();
        void addItem(Product*);
        void removeItem(int);
        void showCart();
        void checkout();
        int count();
};

#endif