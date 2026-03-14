#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	char a[] = "I";
	char b[] = "love";
	char c[] = "you";
	char* p[3] = { a, b, c };
	for (int i = 0; i < 3; i++) {
		cout << p[i] << ' ';
	}
	cout << endl;

	int arr[3][4] = {
		{ 1, 2, 3, 4},
		{ 2, 5, 66,13},
		{ 5, 4, 56, 2}
	};
	int* parr[3];
	parr[0] = arr[0];
	parr[1] = arr[1];
	parr[2] = arr[2];
	cout << &parr << endl;
	cout <<  parr[0] << endl;
	cout << *(parr + 1) << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << (parr[i] + j) << ' ';
		}
		cout << endl;
	}
	return 0;
}