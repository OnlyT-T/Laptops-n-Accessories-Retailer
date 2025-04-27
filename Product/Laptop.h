#ifndef LAPTOP_H
#define LAPTOP_H
#include "Product.h"

class Laptop : public Product {
    private:
        string cpu;
        int ram;
        int storage;
        string gpu;
    public:
        Laptop();
        Laptop(int, string, string, float, string, int, int, string);
        void setCPU(string cpu) { this->cpu = cpu; }
        void setRAM(int ram) { this->ram = ram; }
        void setStorage(int storage) { this->storage = storage; }
        void setGPU(string gpu) { this->gpu = gpu; }
        string getCPU() const { return cpu; }
        int getRAM() const { return ram; }
        int getStorage() const { return storage; }
        string getGPU() const { return gpu; }
        virtual void showInfo(bool);
};

#endif