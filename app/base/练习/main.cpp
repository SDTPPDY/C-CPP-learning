#include <iostream>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	if (m > n) {
		int temp = m; 
		m = n;
		n = temp;
		cout << m << " " << n << endl;
	}
	cout << m << " " << n << endl;
}