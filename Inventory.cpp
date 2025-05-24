#include "Inventory.h"

Inventory::Inventory() {
    // Product* laptop0 = new Laptop("None", "None", 0.0, "None", 0, 0, "None");
    // Product* accessory0 = new Accessory("None", "None", 0.0, "None", false);
    // this->products.push_back(laptop0);
    // this->products.push_back(accessory0);
}
Inventory::Inventory(vector<Product*> products) {
    this->products = products;
}
Inventory::~Inventory() {
    if (!products.empty()) {
        for (auto p : products) {
            delete p;
        }
        products.clear();
    }
}
void Inventory::addProduct(Product* p) {
    products.push_back(p);
}
bool Inventory::removeProduct(int id) {
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
void Inventory::listProduct() {
    if(products.size() == 0){
        cout << "There is no available product!" << endl;
    }
    for(auto p = products.begin(); p != products.end(); p++) {
        (*p)->listDisplay();
    }
    cout << endl;
}
Product* Inventory::getProductById(int id) {
    for (auto p : products) {
        if (p->getId() == id)
            return p;
    }
    return nullptr;
}
///hiii
// void Inventory::search(int id) {
//     bool found = false;
//     for (auto p = products.begin(); p != products.end(); ++p) {
//         if ((*p)->getId() == id) {
//             cout << "--> Here's the product you're looking for:" << endl;
//             (*p)->showInfo(true);
//             found = true;
//         }
//     }
//     if (!found) cout << "--> Unable to find the product you're looking for. Please try again." << endl;
// }