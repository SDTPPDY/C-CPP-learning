 #define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int* fun() {
	return NULL;
}

int* getarray(int a, int d, int n) {
	int* ret = new int[n];	//整个表达式的含义是：创建一个包含n个整数的数组，并将数组的首地址赋值给指针ret
	// ret[0] = a;
	// ret[1] = a + d;
	// ...
	// ret[i] = a + i * d;
	for (int i = 0; i < n; i++) {
		ret[i] = a + i * d;
	}
	return ret;
}
int main() {
	int* arr = getarray(5, -2, 6);
	for (int i = 0; i < 6; ++i) {
		cout << arr[i] << ' ' << *(arr + i) << endl;
	}

	return 0;
}