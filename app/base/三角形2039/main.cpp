/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	int m;
	cin >> m;
	while (m--) {
		double x, sum = 0, max = 0;
		for (int i = 0; i < 3; i++) {
			cin >> x;
			sum += x;
			if (x > max) {
				max = x;
			}
		}
		sum -= max;
		if (sum > max) {
			cout << "YES";
		}
		else {
			cout << "NO";
		}
		cout << endl;
	}

	return 0;
}
*/

#include <iostream>
#include <algorithm>
using namespace std;

double arr[3];

int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> arr[0] >> arr[1] >> arr[2];
		sort(arr, arr + 3);
		if (arr[0] + arr[1] > arr[2]) {
			cout << "YES";
		}
		else {
			cout << "NO";
		}
		cout << endl;
	}
	return 0;
}