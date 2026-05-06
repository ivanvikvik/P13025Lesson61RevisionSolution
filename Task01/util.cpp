#include "util.h"

void print_test(int a, int b, int c, int aa, int bb, int cc, string test_name) {
	get_in_desc_order(&a, &b, &c);
	
	bool result = a == aa && b == bb && c == cc;

	cout << test_name << " - " << (result ? "completed successfully. Well DONE!!!\033[1;32m [PASS]"
		: "was not running successfully. ERROR!\033[1;31m [FAIL]") << endl;

	cout << "\033[0m";

	if (!result) {
		cout << "Result of getting in order: expected - " << aa << " " << bb << " " << cc
			<< ", but actual -  " << a << " " << b << " " << c << endl;
	}

	cout << "\033[1;33m";
	cout << "----------------------------------------------------" << endl;
	cout << "\033[0m";
}