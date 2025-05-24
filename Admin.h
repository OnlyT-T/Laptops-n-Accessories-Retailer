#ifndef ADMIN_H
#define ADMIN_H

#include "Shop.h"
class Admin{
public:
void adminPanel(Shop* shop);
void checkShop(Shop* shop);
void searchProduct(Shop* shop);
void addProduct(Shop* shop);
void removeProduct(Shop* shop);
void logOutAdmin();
};
#endif
