#include <iostream> 
using namespace std;

int TJ(int a, int b, int x) {
	x = (a > b ? a : b);
	return x;
}
//条件运算符

int ifelse(int a, int b, int c) {
	if ((a + b) & 1) {
		cout << "666" << endl;
	}
	else if((a + b * c) & 1) {
		cout << "555" << endl;
	}
	else if((a * b * c) & 1) {
		cout << "444" << endl;
	}
	else {
		cout << "******是么也不是" << endl;
	}
	return 0;
}
int main() {
	int a, b, c, d, x = 0;
	cout << "请输入a：";	
	cin >> a;
	cout << "请输入b：";
	cin >> b;
	cout << "请输入c：";
	cin >> c;
	cout << "请输入d：";
	cin >> d;
	if (d & 1) {
		cout << "d是一个奇数" << d << endl;
	}
	else{
		cout << "d是一个偶数" << d << endl;
	}
	ifelse(a, b ,c);
	int y = TJ(a, b, x);
	cout << y << endl;

	return 0;
}

