#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int* get_gap_list(int* arr, int size) {
	int* p = new int[size - 1];
	for (int i = 0; i < size - 1; ++i) {
		p[i] = arr[i + 1] - arr[i];
	}
	return p;
}

int main() {
	int* ptr = new int(1314);
	*ptr = 520;
	cout << *ptr << endl;

	delete ptr;
	ptr = NULL;

	cout << "------" << endl;

	int arr[] = { 1, 5, 6, 4, 4, 3, 3, 2, 1, 9 };
	int* p = get_gap_list(arr, 10);
	for (int i = 0; i < 9; ++i) {
		cout << p[i] << endl;
	}
	delete[] p;
	p = NULL;

	while (1);

	return 0;
}