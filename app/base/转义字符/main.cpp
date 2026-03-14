#include <iostream>
using namespace std;

int main() {
    // 转义字符
    cout << "Hello\tWorld!" << endl; // \t 表示制表符
    cout << "Hello\nWorld!" << endl; // \n 表示换行符
    cout << "Hello\\World!" << endl; // \\ 表示反斜
    cout << "Hello\"World!" << endl; // \" 表示双引号
    cout << "Hello\'World!" << endl; // \' 表示单引号
    cout << "Hello\0World!" << endl; // \0 表示字符串结束符
    return 0;
}