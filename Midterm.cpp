// Midterm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount() {
        balance = 0.0;
    }
    void deposit(double amount) {
        balance += amount;
            cout << "Added starting balance of " << balance << endl;
            saveTransaction("Deposit", amount);
    }
    void makePurchase(string item, double cost) {
        if (cost > balance) {
            cout << "Insufficient funds for " << item << endl;
        }
        else {
            balance -= cost;
                cout << "Purchased " << item << endl;
            saveTransaction("Purchase - " + item, cost);
        }
    }
    void displayBalance() {
        cout << "Current Balance: $" << balance << endl;
    }
    void saveTransaction(string type, double amount) {
        ofstream file("transactions.txt", ios::app);
        if (file.is_open()) {
            file << type << " :$" << amount << endl;
            file.close();
        }
    }
};


int main()
{
    BankAccount myAccount;

    myAccount.deposit(200.00);
    myAccount.makePurchase("Lunch", 24.50);
    myAccount.makePurchase("Book", 25.00);
    myAccount.makePurchase("Game Skins and Cosmetics", 60.00);
    myAccount.displayBalance();

    return 0;
}

