#include <iostream>
#include "Remove.h"
using namespace std;

int Remove()
{
	string itemName;
	int quantity;

	cout << "Enter item to remove: ";
	cin >> itemName;
	cout << "Enter quantity to remove: ";
	cin >> quantity;
	cout << "You have removed " << quantity << " of " << itemName << " from your inventory." << endl;

	return 0;
}