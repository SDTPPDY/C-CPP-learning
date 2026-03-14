#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// c malloc free
//c++ new delete

int* get_v(int v) {
	int* a = new int(v); // 是一个栈上的地址
	cout << a << endl; // *a 也就是 a 解引用以后得到的值，是存储在堆上面的
	return a;          // 函数返回的时候，虽然栈上的变量 a 被操作系统释放了，但是 a 指向的内存，还是存在的
}



int main() {
	int* p = get_v(1314);
	cout << *p << endl; // 所以，这里还是可以解引用，得到堆上的数据的
	cout << p << endl;

	return 0;
}