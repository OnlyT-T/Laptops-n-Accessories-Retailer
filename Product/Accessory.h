#ifndef ACCESSORY_H
#define ACCESSORY_H
#include "Product.h"

// class Accessory;
// ostream &operator << (ostream &, Accessory &);
// istream &operator >> (istream &, Accessory &);

class Accessory : public Product {
    private:
        static int accessoryCount;
        string type;
        bool wireless;
    public:
        Accessory();
        Accessory(string, string, float, string, bool);
        void setType(string type) { this->type = type; }
        void setWireless(bool wireless) { this->wireless = wireless; }
        string getType() const { return type; }
        bool getWireless() const { return wireless; }
        int getAccessoryCount() const { return accessoryCount; }
        virtual void showInfo(bool);
        // friend ostream &operator << (ostream &, Accessory &);
        // friend istream &operator >> (istream &, Accessory &);
};

#endif