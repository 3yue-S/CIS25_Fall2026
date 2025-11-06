// Week 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Item {
public:
    string name;
    int quantity;

    void displayItem() const {
        cout << "Name: " << name << ", Quantity: " << quantity << ", " << endl;
    }

};

int main()
{
    int numItems;
    cout << "Enter the number of items to be added to the inventory: ";
    cin >> numItems;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<Item> inventory(numItems);

    for (int i = 0; i < numItems; ++i) {
        
        cout << "\nEnter details for the item " << i + 1 << ":" << endl;
        cout << "Enter name: ";
        getline(cin, inventory[i].name);

        cout << "Enter quantity: ";
        cin >> inventory[i].quantity;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    }
    cout << "\n --- Current Inventory ---" << endl;
    if (numItems == 0) {
        cout << "Inventory is empty." << endl;
    }
    else {
        for (const Item& item : inventory) {
            item.displayItem();
        }
    };


    return 0;
}
