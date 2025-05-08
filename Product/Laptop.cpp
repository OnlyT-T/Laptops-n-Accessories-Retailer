#include "Laptop.h"

// Static variable
// int Laptop::laptopCount = 0;

Laptop::Laptop() : Product() {
    this->id = id; // Laptop ID must start with 10 (10***)
    this->cpu = "";
    this->ram = 0;
    this->storage = 0;
    this->gpu = "";
    // laptopCount++;
}
Laptop::Laptop(int id,string name, string brand, float price, string cpu, int ram, int storage, string gpu) : Product(id,name, brand, price) {
    this->id = productCount+1;
    this->cpu = cpu;
    this->ram = ram;
    this->storage = storage;
    this->gpu = gpu;
    productCount++;
    // laptopCount++;
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
// ostream &operator << (ostream &strm, const Laptop &obj) {
//     strm << obj.getID() << ". " << obj.getName() << ", " << obj.getBrand() << " | $" << obj.getPrice() << endl;
//     return strm;
// }
// istream &operator >> (istream &strm, const Laptop &obj) {
//     return strm;
// }