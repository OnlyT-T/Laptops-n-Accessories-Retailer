#ifndef USER_H
#define USER_H
#include "Cart.h"
#include "Shop.h"

class User {
    private:
        Cart cart;
    public:
        void userMenu(Shop*);
};

#endif