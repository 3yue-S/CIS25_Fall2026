#ifndef User_h
#define User_h
#include <iostream>
using namespace std;

class User {
public: 
	virtual void accessLevel() {
		cout << "General Access\n";
	}
};

#endif // User_h

