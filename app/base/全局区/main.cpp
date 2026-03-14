#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int g_a = 1;
int g_b = 1;
const int c_g_a = 1;
const int c_g_b = 1;

// 全局变量、全局常量、静态常量、字符串常量

int main() {
	cout << "全局变量g_a的地址" << &g_a << endl;
	cout << "全局变量g_b的地址" << &g_b << endl;

	int c = 1;
	int d = 1;
	static int e = 1;
	static int f = 1;
	cout << "局部变量c的地址" << &c << endl;
	cout << "局部变量d的地址" << &d << endl;
	cout << "静态变量e的地址" << &e << endl;
	cout << "静态变量f的地址" << &f << endl;
	
	cout << "字符串常量的地址" << &"夜深人静写算法" << endl;

	const int g = 1;
	const int h = 1;
	cout << "局部常量的地址" << &g << endl;
	cout << "局部常量的地址" << &h << endl;

	cout << "全局常量的地址" << &c_g_a << endl;
	cout << "全局常量的地址" << &c_g_b << endl;


	return 0;
}