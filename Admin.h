#ifndef ADMIN_H
#define ADMIN_H

#include "Inventory.h"

void adminPanel(Inventory* inventory);
void checkInventory(Inventory* inv);
void searchProduct(Inventory* inv);
void addProduct(Inventory* inv);
void removeProduct(Inventory* inv);

#endif
