#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// 代码区、全局区、栈区、堆区

void print_message() {
	cout << "Hello World!"<< endl;
}
int main() {
	print_message();
	while (1);
	return 0;
}