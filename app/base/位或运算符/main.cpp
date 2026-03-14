#include <iostream> 
using namespace std;
//	| 有一即一

int main() {
	int a = 0b1010;
	int b = 0b0111;
	cout << (a | b) << endl;
	cout << "---" << endl;

	//1.设计标记位
	int c = 0b101011l;
	//      0b0001000
	cout << (c | 0b0001000) << endl;	
	cout << "---" << endl;

	//2.连续的0变成1
	int e = 0b1010010000;
  //e - 1 = 0b1010001111;
	cout << (e | (e - 1)) << endl;

	
	return 0;
}