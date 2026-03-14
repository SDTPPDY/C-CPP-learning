#include <iostream>
using namespace std;

int main() {
	int a = 0;
	// do while 一定会执行一遍
	do {
		cout << a << endl;
		a += 1;
	} while (a < 3);	//退出条件

	return 0;
}