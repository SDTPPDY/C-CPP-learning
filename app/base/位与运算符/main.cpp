#include <iostream>
using namespace std;

int main() {
	int a = 0b1010;
	int b = 0b0110;
	//		0b0010
	cout << (a & b) << endl;

	//应用
	//1.奇偶性
	cout << 5 % 2 << endl;
	cout << (5 & 1) << endl;	//效率高
	cout << "--" << endl;
	//		0b101
	//		0b001
	//2.获取一个数的后五位
	int c = 251351;
	cout << (c & 0b11111) << endl;
	cout << "--" << endl;

	//3.消除末尾连续的1
	//	     e = 0b101001111
	//	 e + 1 = 0b101010000
	//       & = 0b101000000

	//判断是否是2的幂
	//	      e = 0b10000
	//    e - 1 = 0b01111
	//        & = 0
	int f = 2 ^ 5;
	cout << ((f > 0) && (f & f - 1)) << endl;
	return 0;
}