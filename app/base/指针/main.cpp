#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

/*
指针常量          tpye* const        指针值是一个常量                指针无法被赋值
常量指针          const type*        指向常量的指针                  指针解引用后无法被赋值
常量指针常量      const type* const  指针值和指针指向的值都是常量    指针和解引用都无法被赋值
*/

int main() {
	int a = 10;
	int b = 2;
	int c = 6;
	printf("%#X\n", &a);
	cout << a << endl;
	int* p = &a;	//指针变量(用于储存变量的地址)
	*p = 6;	//指针的解引用
	cout << a << ' ' << *p << endl;
	cout << "____" << endl;
	//1.指针常量
	int* const ap = &a;
	*ap = 6;	//可以修改
	cout << "____" << endl;
	//2.常量指针
	const int* bp = &b;		//可以修改
	//*bp = 2;	//不能修改
	cout << "____" << endl;
	//3.常量指针常量
	const int* const cp = &c;
	return 0;
}