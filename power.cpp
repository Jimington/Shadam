#include <iostream>

using namespace std;


int power(int base, int exponent);

int main() {
	
	int base;
	int exponent;
	
	cin >> base;
	cin >> exponent;

	cout << power(base, exponent) << "\n";

}

int power(int base, int exponent) {
	int result = 1;
	for (int i = 0; i < exponent; ++i) {
		result *= base; // -> same as -> result = result * base;
	}
	return result;
}

