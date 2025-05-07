#include "Product/Product.h"
#include "Product/Laptop.h"
#include "Product/Accessory.h"
#include <vector>
class Cart
{
    private:
    vector<Product*>cartItems;
    public:
    void addItem(Product*);
    void removeItem(int);
    void showCart();
    void checkout();
};