#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

int add(int, int);//不写变量也可以
int sum(int n);
void printabs(int a);
void swap(int a, int b);
//函数的申明

int main() {
	int a, b;
	double c;
	cin >> a >> b;
	printabs(a);
	printabs(b);
	cout << add(a, b) << endl;
	scanf("%f", &c);
	printf("%.2lf", c);//_s安全函数
	return 0;
}

int add(int a, int b) {
	int c = a + b;
	return c;
}

int sum(int n) {
	/*int ret = 0;
	for (int i = 0; i < n; ++i) {
		ret += i + 1;
	}
	return ret;*/
	return (1 + n) / 2 * n;
}
void printabs(int a) {
	if (a < 0) {
		a = -a;
	}
	cout << a << endl;
}

void swap(int a, int b) {
	int tmp = a; a = b; b = tmp;
	cout << a << ' ' << b;
}
