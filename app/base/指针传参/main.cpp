#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

void swap(int* a, int* b) {
	cout << "调用函数后 a 的地址 = " << a << endl;
	cout << "调用函数后 b 的地址 = " << b << endl;
	int tmp = *a; *a = *b; *b = tmp;
}

int main() {
	int a = 1;
	int b = 2;
	cout << "调用函数后 a 的地址 = " << &a << endl;
	cout << "调用函数后 b 的地址 = " << &b << endl;
	cout << "----------------" << endl;
	swap(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}