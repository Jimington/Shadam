#include <cassert>
#include <iostream>
#include "functions.h"

using std::cout;
using std::string;

void print_progress(string milestone, int num_right) {
	cout << "all " << milestone << " tests passed!\n";
	cout << "[";
	for (int i = 0; i < num_right; ++i) {
		cout << ".";
	}
	for (int i = 0; i < 12 - num_right; ++i) {
		cout << "_";
	}
	cout << "] " << num_right << "/" << 12 << "\n";
}

int main() {

	int right = 0;

	//testing bool less_than_ten(int num)
	assert(less_than_ten(9)); right++;
	assert(!less_than_ten(11)); right++;
	assert(less_than_ten(-5)); right++;
	assert(less_than_ten(0)); right++;
	
	print_progress("less_than_ten", right);
	
	//testing double convert_to_celcius(double fahrenheit)

	assert(convert_to_celcius(59.0) == 15.0); right++;
	assert(convert_to_celcius(212) == 100); right++;
	assert(convert_to_celcius(32) == 0); right++;

	print_progress("convert_to_celcius", right);

	assert(!isEven(1)); right++;
	assert(isEven(2)); right++;
	assert(!isEven(-15)); right++;
	assert(isEven(-16)); right++;
	assert(isEven(0)); right++;

	print_progress("isEven", right);








}