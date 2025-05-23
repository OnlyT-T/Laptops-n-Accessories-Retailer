#include "Laptop.h"


Laptop::Laptop() : Product() {}
Laptop::Laptop(int id,string name, string brand, float price, string cpu, int ram, int storage, string gpu) : Product(id,name, brand, price) {
    this->id = productCount+1;
    this->cpu = cpu;
    this->ram = ram;
    this->storage = storage;
    this->gpu = gpu;
    productCount++;
}
void Laptop::showInfo() {
        cout << "---< Laptop Information >---" << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Brand: " << brand << endl;
        cout << "Price: $" << price << endl;
        cout << "CPU: " << cpu << endl;
        cout << "RAM: " << ram << "GB" << endl;
        cout << "Storage: " << storage << "GB" << endl;
        cout << "GPU: " << gpu << endl;
    
}
