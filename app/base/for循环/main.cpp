#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "ÇëÊäÈënµÄÖµ£º";
	while (cin >> n) {
		int sum = 0;
		for (int i = 0; i <= n; ++i) {
			sum += i;
		}
		cout << sum << endl;
	}
	int a = 1;
	cout << endl << a / 10 << endl;
	return 0;
}