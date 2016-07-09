#include <iostream>

using namespace std;

int main() {
	
	//1.

	for (int i = 0; i == 10; ++i) {
		cout << i << endl;
	}


	//2.

	for (int i = 1; i <= 1; ++i) {
		cout << "5" << endl;
	} 

	//3.

	for (int i = 0; i < 15; ++i) {
		if (i % 5 == 0) {
			cout << i << endl;
		}
		else {
			cout << "$" << endl;
		}
	}

	//4.

	for (int i = 10; i > 0; --i) {
		cout << i/2 << endl;
	}

	//5.

	int i = 5;

	for (; i > 0; --i) {
		cout << i << endl;
		i -= 1;
	}

	//6.

	for (int i = 0; i < 100; ++i) {
		cout << "#" << endl;
		i += 31;
	}

	cout << endl << endl;


}