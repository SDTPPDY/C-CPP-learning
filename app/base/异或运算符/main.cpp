#include <iostream> 
#define mima 1314
using namespace std;
//			^ 异或 相同为0	不同的为1

int main() {
	int a = 0b1001;
	int b = 0b0101;
	//    ^ 0b1100
	cout << (a ^ b) << endl;
	cout << "___" << endl;
	//变量交换
	int x = 33;
	int y = 66;
	x = x ^ y,
	y = x ^ y,
	x = x ^ y;
	cout << x << "  " << y << endl;
	cout << "---" << endl;

	//用于数据加密
	int ymima;
	cout << "输入待加密数：";
	cin >> ymima;
	cout << "加密结果：" << (mima ^ ymima);

	return 0;
}
