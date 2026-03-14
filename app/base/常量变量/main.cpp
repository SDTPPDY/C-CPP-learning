#include <iostream>
using namespace std;
#define X "Hello World"
#define Y "你好世界"
// define是把这个变量定义为赋值，完全一致。 不需要用“=”！！
#define A 1 + 2
#define B (1 + 2)
int main() {
	const int a = 1 + 2;
	// a为无法改变的变量
	cout << "X is " << X << endl << "Y is " << Y << endl;
	cout << "A * A = " << A * A << endl << "B * B = " << B * B << endl;
	cout << "a is " << a << endl;
	return 0;
}