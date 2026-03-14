#include <iostream>
using namespace std;

int main() {
	int a = 0;
	cin >> a;
	switch (a) {
		case 0:
			cout << "ZERO" << endl;
			break;
		case 1:
			cout << "ONE" << endl;
			break;
		case 2:
			cout << "TWO" << endl;
			break;
		case 3:
			cout << "THREE" << endl;
			break;
		default:
			cout << "BEYOND THREE OR BELOW ZERO" << endl;
	}
	return 0;
}