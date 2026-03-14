#include <iostream>
/*
 i = input
 o = output
*/
using namespace std;

int main() {
	//1. 整形输入
	int a = 0;
	cin >> a;
	cout << "a的值变成了" << a << endl;
	//2. 浮点数输入
	double b = 0;
	cin >> b;
	cout << "b的值变成了" << b << endl;
	//3. 字符新输入
	char c = 0;
	cin >> c;
	cout << "c的值变成了" << c << endl;
	//4. 字符串输入
	string d = "a";
	cin >> d;
	cout << "d的值变成了" << d << endl;
	//5. 布尔类型输入
	bool e = 0;
	cin >> e;
	cout << "e的值变成了" << e << endl;
	return 0;
}