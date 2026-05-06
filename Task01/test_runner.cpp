#include <iostream>
#include "logic.h"

using namespace std;

int main() {
	int a = 1, b = 2, c = 3;

	cout << a << " " << b << " " << c << endl;

	get_in_desc_order(&a, &b, &c);

	cout << a << " " << b << " " << c << endl;

	return 0;
}