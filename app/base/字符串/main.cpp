#include <iostream> 
#include <string>
using namespace std;
/*
char 变量名[] = "aaaa";
string 变量名 = "aaaa";   //要引用string头文件
字符串可以相加
*/
int main() {
	string a = "aaa";
	cout << a + "aaa" << endl;
	cout << sizeof(a) << endl;
	return 0;
}