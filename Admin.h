#ifndef ADMIN_H
#define ADMIN_H
#include "Shop.h"

class Admin {
    public:
        void adminPanel(Shop*);
        void checkShop(Shop*);
        void searchProduct(Shop*);
        void addProduct(Shop*);
        void removeProduct(Shop*);
};

#endif