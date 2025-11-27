#include <iostream>
#include "Employee.h"
#ifndef InventoryManager_h
#define InventoryManagaer_h
using namespace std;

class InventoryManager : public Employee {
public: 
	void accessLevel() override {
		cout << "Full Inventory Management Access\n";
	}
};

#endif //Inventory Manager_h