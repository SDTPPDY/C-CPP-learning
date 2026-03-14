#include <iostream>
using namespace std;

union Data {
    int i;
    float f;
}; // 联合体

int main() {
    Data data;
    data.i = 10;                           // 将整数赋值给联合体成员 i
    cout << "data.i = " << data.i << endl; // 输出联合体成员 i 的值
    cout << "data.f = " << data.f << endl; // 输出联合体成员 f 的值（未定义行为）

    data.f = 3.14f;                        // 将浮点数赋值给联合体成员 f
    cout << "data.i = " << data.i << endl; // 输出联合体成员 i 的值（未定义行为）
    cout << "data.f = " << data.f << endl; // 输出联合体成员 f 的值

    return 0;
}