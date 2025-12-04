// Module 11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Cosplay {
    int id;
    string name;
    float price;
public:
    Cosplay(int i, string n, float p) : id(i), name(n), price(p) {
        cout << "Constructor called\n";
    }
    ~Cosplay() {
        cout << "Destructor called\n";
    }
    void printDetails() {
        cout << "Product ID: " << id << ", Name: " << name << ", Price:$" << price << endl;
    }
};

int main()
{
    Cosplay p(1980, "Silverwing MC", 425);
    p.printDetails();
    return 0;
}