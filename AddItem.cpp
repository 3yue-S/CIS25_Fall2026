#include <iostream>
#include "AddItem.h"
using namespace std;

int AddItem(){
	string itemName;
	int quantity;
	
	cout << "Enter item name: ";
	cin >> itemName;
	cout << "Enter quantity: ";
	cin >> quantity;
	cout << "You have added " << quantity << " of " << itemName << " to your inventory." << endl;

	return 0;


}