// Functions & Loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "AddItem.h"
#include "View.h"
#include "Remove.h"
using namespace std;

void showMenu(){

    cout << "1. Add\n2. View Items\n3. Remove Item\n4. Exit\n";
}

int main()
{
    int option;
    do {
        showMenu();
        cin >> option;
        if(option == 1)
        {
            AddItem();
        }
        else if (option == 2)
        {
            View();
        }
        else if (option == 3) 
        {
            Remove();
        }
        else if (option == 4) 
        {
            cout << "Exiting program...\n";
        }
        else 
        {
            cout << "Invalid option. Please try again.\n";
        }
    } while (option != 4);
    return 0;
}

