#include <iostream>
using namespace std;

int main() {
	int a = 0;
	while (1) {
		a++;
		if (a < 6) {
			continue;
		}
		cout << a << endl;
		if (a >= 66) {
			break;
		}
	}


	return 0;
}