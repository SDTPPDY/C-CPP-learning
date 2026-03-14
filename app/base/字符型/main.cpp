#include <iostream>
using namespace std;

int main() {
	char a = 'a';
	char b = 'B';
	b = 120;
	cout << b << endl;
	cout << a << endl;
	cout << (int)a << endl;
	cout << sizeof(a) << endl;
	cout << (char)a + 1 << endl;
	return 0;
}