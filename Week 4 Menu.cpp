// Week 4 Menu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    string itemName;
    int choice;
    cout << "1. Add Item\n2. View Items\n3. Exit\n";
    cout << "Choose an option: ";
    cin >> choice;

    if (choice == 1) { 
        
        cout << "Enter item name: ";
        cin >> itemName;
        cout << "Item added!\n"; 
    }
    else if (choice == 2) {

        cout << "Displaying items...\n";
    }
    else if (choice == 3)cout << "Exiting...\n";
    else cout << "Invalid option.\n";

    return 0;
}


