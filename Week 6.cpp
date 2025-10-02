// Week 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Books
{
public:
    string title;
    int quantity;

};

void saveToFile(const Books& book) {
    ofstream out("books.txt");
    if (out.is_open()) {
        out << book.title << ", " << book.quantity << endl;
        out.close();
        cout << "Book saved to file." << endl;
    }
    else {
        cout << "Unable to open file for writing." << endl;
    }
}

void loadFromFile(Books& book) {
    ifstream in("books.txt");
    if (in.is_open()) {
        string line;
        while (getline(in, line)) {
            cout << "File content: " << line << endl;
        }
        in.close();
    }
    else {
        cout << "Unable to open file for reading." << endl;
    }
};

int main() {
    Books tool;
    tool.title = "The Husky and His White Cat Shizun";
    tool.quantity = 5;

    saveToFile(tool);
    loadFromFile(tool);

    return 0;
}
