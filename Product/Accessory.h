#ifndef ACCESSORY_H
#define ACCESSORY_H
#include "Product.h"

class Accessory : public Product {
    private:
        string type;
        bool wireless;
    public:
        Accessory();
        Accessory(int, string, string, float, string, bool);
        ~Accessory();
        void setType(string type) { this->type = type; }
        void setWireless(bool wireless) { this->wireless = wireless; }
        string getType() const { return type; }
        bool getWireless() const { return wireless; }
        void showInfo();
};

#endif