#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Bats {
private: 
	string Shapes;
	string Species;
	string Habitat;
	string AverageLifespan;
	string Environment;
public: 

	Bats(string t, string s, string h, string l, string e): Shapes(t), Species(s), Habitat(h), AverageLifespan(l), Environment(e) {} //Constructor for initializing bat data

	void printDetails() const {		//Print bat details
		cout << "Shapes Name: " << Shapes << " Species: " << Species << " Habitat: " << Habitat << " Lifespan: " << AverageLifespan << " years" << " Environment: " << Environment << endl;
	}
};