#include "Laptop.h"

Laptop::Laptop() : Product() {
    this->cpu = "";
    this->ram = 0;
    this->storage = 0;
    this->gpu = "";
}
Laptop::Laptop(int id, string name, string brand, float price, string cpu, int ram, int storage, string gpu) : Product(id, name, brand, price) {
    this->cpu = cpu;
    this->ram = ram;
    this->storage = storage;
    this->gpu = gpu;
}
void Laptop::showInfo(bool showDetail = false) {
    Product::showInfo(showDetail);
    if (showDetail) {
        //cout << "---< Laptop Information >---" << endl;
        cout << "CPU: " << cpu << endl;
        cout << "RAM: " << ram << "GB" << endl;
        cout << "Storage: " << storage << "GB" << endl;
        cout << "GPU: " << gpu << endl;
    }
}