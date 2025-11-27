// Module 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "User.h" //Base class
#include "Employee.h" // Derived from User
#include "InventoryManager.h" // Derived form Employee
using namespace std;


int main()
{
    InventoryManager mgr;
    mgr.accessLevel(); // Print: Fulll Inventory Management Access

    return 0;
}


