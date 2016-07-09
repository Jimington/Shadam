#include <iostream>
#include <iomanip>

using namespace std;

/*

TEMPERATURE CONVERTER
---------------------

Get the following from the user:
 	1. Mode
		a. Fahrenheit to Celcius
		b. Celcius to Fahrenheit
	2. The temperature they want to convert (saved as a double)

Then, print the conversion using the following convention:

	xx.xx˚F -> yy.yy˚C (or xx.xx˚C -> yy.yy˚F)

*/ 

int main() {
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout << "~~~~~~~~~~~Temperature Converter~~~~~~~~~~~~~\n";
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

	char mode;
	double temp;
	
	cout << "Enter 'F' to convert from Fahrenheit to Celcius\n";
	cout << "Enter 'C' to convert from Celcius to Fahrenheit\n> ";

	cin >> mode;

	cout << "Enter temperature to convert\n> ";
	cin >> temp;


	if (mode == 'F') {
		cout << temp << "˚F -> " << (temp - 32.0) * (5.0/9.0) << "˚C\n"; 
	}

	else if (mode == 'C') {

	}

	else {
		cout << "Invalid input. Must enter either 'F' or 'C'\n";
	}

}

