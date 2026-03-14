#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int prinum(int n) {
	int mul = 1;
	for (int i = 2; i < n / 2; ++i) {;
		if (n % i == 0) {
			mul = -1;
			break;
		}
	}
	mul %= n;
	if (mul == -1) {
		return 0;
	}
	else {
		return 1;
	}

}

int main() {
	int x, y;
	while (cin >> x >> y) {
		if (x == 0 && y == 0) {
			break;
		}
		int num = 0;
		for (int i = x; i <= y; ++i) {
			int fn = i * i + i + 41;
			if (prinum(fn)) {
				num++;
			}
			else {
				num = -1;
				break;
			}
		}
		if (num == y - x + 1) {
			cout << "OK" << endl;
		}
		else {
			cout << "Sorry" << endl;
		}
	}

	return 0;
}