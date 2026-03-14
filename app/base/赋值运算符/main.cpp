#include <iostream>
#include <string>
using namespace std;

int main() {
	int x = 1;
	int y = 2;
	x = y; //将y的值赋给x
	cout << x << endl;
	x += y; // x = x + y 也有 x -= y; x *= y; x /= y; x %= y
	cout << x << endl;
	return 0;
}