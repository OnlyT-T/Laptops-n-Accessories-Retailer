#include "Accessory.h"

// Static variable
int Accessory::accessoryCount = 0;

Accessory::Accessory() : Product() {
    this->id = 1100 + accessoryCount; // Accessory ID must start with 11 (11***)
    this->type = "";
    this->wireless = false;
    accessoryCount++;
}
Accessory::Accessory(string name, string brand, float price, string type, bool wireless) : Product(name, brand, price) {
    this->id = 1100 + accessoryCount;
    this->type = type;
    this->wireless = wireless;
    accessoryCount++;
}
void Accessory::showInfo(bool showDetail = false) {
    Product::showInfo(showDetail);
    if (showDetail) {
        //cout << "---< Accessory Information >---" << endl;
        cout << "Type: " << type << endl;
        cout << "Wireless: ";
        if (wireless) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
}
// ostream &operator << (ostream &strm, Accessory &obj) {
//     strm << obj.getID() << ". " << obj.getName() << ", " << obj.getBrand() << " | $" << obj.getPrice() << endl;
//     return strm;
// }
// istream &operator >> (istream &strm, Accessory &obj) {
//     string name;
//     string brand;
//     float price;
//     string type;
//     bool wireless;
    
//     // Input Name
//     cout << "Name: "; getline(cin, name);
//     // Input Brand
//     cout << "Brand: "; cin.ignore(); getline(cin, brand);
//     // Input Price
//     do {
//         cout << "Price: $"; cin.ignore(); cin >> price;
//         if (price < 0) cout << "ERROR: Invalid input. Please input positive value." << endl;
//     } while (price < 0);
//     // Input Type
//     cout << "Type: "; cin.ignore(); getline(cin, type);
//     // Input Wireless
//     int choice;
//     do {
//         cout << "Is the accessory wireless (0 for No, 1 for Yes)? "; cin.ignore(); cin >> choice;
//         if (choice == 0) wireless = false;
//         else if (choice == 1) wireless = true;
//         else cout << "Invalid Choice. Please try again." << endl;
//     } while (choice != 0 && choice != 1);

//     // Update data
//     obj.setID(1100+obj.getCount());
//     obj.setName(name);
//     obj.setBrand(brand);
//     obj.setPrice(price);
//     obj.setType(type);
//     obj.setWireless(wireless);

//     return strm;
// }