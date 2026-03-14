#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

//1.一定要初始化
//2.初始化以后无法修改

void test() {
	int a_very_very_very_very_very_very_very_very_very_long_arr[8] = { 1, 1 };
	for (int i = 2; i < 8; ++i) {
		a_very_very_very_very_very_very_very_very_very_long_arr[i] = a_very_very_very_very_very_very_very_very_very_long_arr[i - 1] * a_very_very_very_very_very_very_very_very_very_long_arr[i - 1] + a_very_very_very_very_very_very_very_very_very_long_arr[i - 2] * a_very_very_very_very_very_very_very_very_very_long_arr[i - 2];
	}
	for (int i = 0; i < 8; ++i) {
		cout << a_very_very_very_very_very_very_very_very_very_long_arr[i] << endl;
	}

	for (int i = 2; i < 8; ++i) {
		a_very_very_very_very_very_very_very_very_very_long_arr[i] = 0;
	}


	for (int i = 2; i < 8; ++i) {
		int pre1 = a_very_very_very_very_very_very_very_very_very_long_arr[i - 1];
		int pre2 = a_very_very_very_very_very_very_very_very_very_long_arr[i - 2];
		int& now = a_very_very_very_very_very_very_very_very_very_long_arr[i];
		now = pre1 * pre1 + pre2 * pre2;
	}
	for (int i = 0; i < 8; ++i) {
		cout << a_very_very_very_very_very_very_very_very_very_long_arr[i] << endl;
	}
}

int main() {
	int a = 1314;
	int& b = a;
	b = 520;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "-------" << endl;

	test();

	return 0;
}