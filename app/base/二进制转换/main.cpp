#include <iostream>


using namespace std;

int f_pow(int x, int y) {
	int result;
	const int a = x;
		while(y > 1) {
			x *= a;
			y--;
		}
		result = x;
	return result;
}

int DinaryToDecimal(int Dinary) {
	int yushu, Decimal, len;
	len = 0, Decimal = 0;
	while (Dinary > 0) {
		yushu = Dinary % 10;
		Decimal += yushu * f_pow(2, len);
		Dinary = (Dinary - yushu) / 10;
		len++;
		if ((yushu != 1) && (yushu != 0) == 1) {
			Decimal = -1;
			break;
		}
	}
	return Decimal;
}

int main() {
	int Decimal;
	cout << "请输入二进制数：";
	while (cin >> Decimal) {
		if (DinaryToDecimal(Decimal) != -1) {
			cout << "转化后的结果是：" << DinaryToDecimal(Decimal) << endl;
			cout << endl << "请输入二进制数：";
		}
		else {
			cout << "请输入正确的二进制数！！！" << endl;
			cout << endl << "请输入二进制数：";
		}
	}
	return 0;
}
