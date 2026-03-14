#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	int (*p)[4];
	int a[3][4] = {
		{ 2, 5, 6, 5},
		{ 3, 66, 15, 3},
		{ 520, 1314, 2, 5}
	};
	p = a;
	cout << **(p + 1) << endl;
	cout << *(p + 1) << endl;

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 4; ++j) {
			cout << (p[i][j]) << ' ';
		}
		cout << endl;
	}
	return 0;
}