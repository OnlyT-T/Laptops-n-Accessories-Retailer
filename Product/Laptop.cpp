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
    const int width = 40;
    cout << "---------< Laptop Information >---------" << endl;
    cout << "=" << left << setw(width-2) <<  ("   ID: " + to_string(id)) << "=" << endl;
    cout << "=" << left << setw(width-2) <<  ("   Name: " + name) << "=" << endl;
    cout << "=" << left << setw(width-2) <<  ("   Brand: " + brand) << "=" << endl;
    stringstream ss;
    ss << fixed << setprecision(2) << price;
    cout << "=" << left << setw(width-2) <<  ("   Price: $" + to_string(price)) << "=" << endl;
    cout << "=" << left << setw(width-2) <<  ("   CPU: " + cpu) << "=" << endl;
    cout << "=" << left << setw(width-2) << ("   RAM: " + to_string(ram) + "GB") << "=" << endl;
    cout << "=" << left << setw(width-2) << ("   Storage: " + to_string(storage) + "GB") << "=" << endl;
    cout << "=" << left << setw(width-2) <<  ("   GPU: " + gpu) << "=" << endl;
    cout << string(width, '-') << endl;
}
