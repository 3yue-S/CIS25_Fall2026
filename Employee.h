#include <iostream>
#include "User.h"
#ifndef Employee_h
#define Employee_h
using namespace std;

class Employee : public User {
public: 
	void accessLevel() override {
		cout << "Employee Access\n";
	}
};

#endif // Employee_h