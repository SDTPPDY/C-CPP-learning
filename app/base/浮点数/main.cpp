#define _USE_MATH_DEFINES //一定用在第一个位置
#include <iostream>
#include <iomanip>
#include <cmath>
#define eps 1.0e-6

using namespace std;

int main() {
	float a = 3.14159265; //7
	double b = 3.14159265; //16
	double c = 6.6e5;
	double d = 6.6e-5;
	double x = 1.0 / 234324247 * 234324247;
	double y = sin(M_PI / 2);

	cout << setprecision(25) << a << endl;
	cout << setprecision(25) << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << x << endl;
	cout << "y的值是" << y << endl;

	if (fabs(x - 1) < eps) {
		cout << "x是1.0" << endl;
	}

	return 0;
}