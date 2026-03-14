#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// 1. 结构体定义
// struct 结构体名 { 结构体成员变量列表 };

struct book {
	string name;
	double price;
	int value;
}cpp;

// 2. 创建结构体

int main() {
	// 2. 创建一个结构体数组
	// Book 数组名[元素个数] = { {}, {}, {}, ... };
	book books[3] = {
		{"C语言程序设计", 199.99, 7},
		{"Python零基础", 399.99, 9},
		{"C++零基础", 39.99, 1000000}
	};
	books[2].name = { "c++从入门到入土" };
	for (int i = 0; i < 3; i++) {
		cout << books[i].name << ' ' << books[i].price << ' ' << books[i].value << endl;
	}
	/*
	book c;
	c.name = "c语言程序设计";
	c.price = 1145.14;
	c.value = 10;
	cout << c.name << ' ' << c.price << ' ' << c.value << endl;
	cout << "--------" << endl;

	book py = { "Python程序设计", 520.1314, 10 };
	cout << py.name << ' ' << py.price << ' ' << py.value << endl;
	cout << "--------" << endl;
	
	cpp.name = "C++零基础编程";
	cpp.price = 9999999;
	cpp.value = 10000000;
	cout << cpp.name << ' ' << cpp.price << ' ' << cpp.value << endl;*/

	return 0;
}