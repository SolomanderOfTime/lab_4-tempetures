#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int temps;

	ifstream myFile;
	myFile.open("temp.txt");

	if (!myFile.is_open()) {
		cerr << "ERROR! file not found" << endl;
	}
	else if (myFile.is_open()) {
		cout << "----------------------------------" << endl;
		cout << "Tempetures" << endl;
		cout << "each * represents 3 degrees" << endl;
		cout << "----------------------------------" << endl;
		while (myFile >> temps) {
			int numStars = temps / 3;
			for (int i = 0; i < numStars; i++) {
				cout << "*";
			};
		};
	};
	myFile.close();
};