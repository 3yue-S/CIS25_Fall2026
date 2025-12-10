// Module 12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "Bats.h"
using namespace std;

int main()
{
	ifstream file("bats_information.csv");
	string line;

	int line_count = 0;
	const int max_lines = 15;

	if (!file.is_open()) {
		cerr << "Error opening file" << endl;
		return 1;
	}
	// Read each line from the file and create Bats objects

	getline(file, line); // Skip header line

	while (line_count < max_lines && getline(file, line)) {
		do {
			stringstream ss(line);
			string shapes, species, habitat, lifespan, environment;
			getline(ss, shapes, ',');
			getline(ss, species, ',');
			getline(ss, habitat, ',');
			getline(ss, lifespan, ',');
			getline(ss, environment, ',');
			Bats bat(shapes, species, habitat, lifespan, environment);
			bat.printDetails();
			line_count++;
		} while (false);
	}

	file.close();
	return 0;
}