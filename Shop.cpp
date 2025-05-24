#include "Shop.h"

Shop::Shop() {}
Shop::Shop(vector<Product*> products) {
    this->products = products;
}
Shop::~Shop() {
    if (!products.empty()) {
        for (auto p : products) {
            delete p;
        }
        products.clear();
    }
}
void Shop::addProduct(Product* p) {
    products.push_back(p);
}
bool Shop::removeProduct(int id) {
    bool removed = false;
    for (auto p = products.begin(); p != products.end(); ++p) { // auto here is actually vector<Product*>::iterator
        if ((*p)->getId() == id) {
            delete (*p);
            products.erase(p);
            removed = true;
            break; // Exit the loop after removing the product
                   // Purpose: To prevent invalid iterator access
                        // After the func erase() is called, the iterator p is no longer valid. Continuing the loop would result in accessing an invalid iterator, causing a segmentation fault.
                        // Nói một cách đơn giản thì sau khi xoá môt index p của vector products, nếu ta cố gắng tiếp tục quá trình vòng lặp thì nó sẽ bị hỗn loạn bởi vì một index của vector đã bị xoá
                        // Chính vì vậy nên ta cần thoát khỏi vòng lặp luôn ngay khi xoá thành công product cần tìm (vì lúc này việc tìm kiếm là không cần thiết nữa)
        }
    }
    return removed;
}
void Shop::listProduct() {
    if(products.size() == 0){
        cout << "There is no available product!" << endl;
    }
    for(auto p = products.begin(); p != products.end(); p++) {
        (*p)->listDisplay();
    }
    cout << endl;
}
Product* Shop::getProductById(int id) {
    for (auto p : products) {
        if (p->getId() == id)
            return p;
    }
    return nullptr;
}