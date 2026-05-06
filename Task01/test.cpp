#include "test.h"

// basic cases
void test01() {
	int a = 1, b = 2, c = 3;
	int aa = 3, bb = 2, cc = 1;
	print_test(a, b, c, aa, bb, cc, "test01");
}

void test02() {
	int a = 1, b = 3, c = 2;
	int aa = 3, bb = 2, cc = 1;
	print_test(a, b, c, aa, bb, cc, "test02");
}

void test03() {
	int a = 2, b = 1, c = 3;
	int aa = 3, bb = 2, cc = 1;
	print_test(a, b, c, aa, bb, cc, "test03");
}

void test04() {
	int a = 2, b = 3, c = 1;
	int aa = 3, bb = 2, cc = 1;
	print_test(a, b, c, aa, bb, cc, "test04");
}

void test05() {
	int a = 3, b = 1, c = 2;
	int aa = 3, bb = 2, cc = 1;
	print_test(a, b, c, aa, bb, cc, "test05");
}

void test06() {
	int a = 3, b = 2, c = 1;
	int aa = 3, bb = 2, cc = 1;
	print_test(a, b, c, aa, bb, cc, "test06");
}

void test07() {
	int a = -2, b = -2, c = 1;
	int aa = 1, bb = -2, cc = -2;
	print_test(a, b, c, aa, bb, cc, "test07");
}

void test08() {
	int a = -2, b = 1, c = -2;
	int aa = 1, bb = -2, cc = -2;
	print_test(a, b, c, aa, bb, cc, "test08");
}

void test09() {
	int a = 1, b = -2, c = -2;
	int aa = 1, bb = -2, cc = -2;
	print_test(a, b, c, aa, bb, cc, "test09");
}

void test10() {
	int a = 7, b = 7, c = 7;
	int aa = 7, bb = 7, cc = 7;
	print_test(a, b, c, aa, bb, cc, "test10");
}

void test11() {
	int a = 0, b = 0, c = 0;
	int aa = 0, bb = 0, cc = 0;
	print_test(a, b, c, aa, bb, cc, "test11");
}

void test12() {
	int a = -1, b = 1, c = 0;
	int aa = 1, bb = 0, cc = -1;
	print_test(a, b, c, aa, bb, cc, "test12");
}

