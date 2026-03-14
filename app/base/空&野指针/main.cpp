#include <iostream>
using namespace std;

int main() {
    // 空指针
    int* ptr = nullptr;              // 使用 nullptr
    cout << "ptr = " << ptr << endl; // 通常为 0 或 nullptr
    // 野指针：指针变量指向一个已经被释放或未分配的内存地址
    int* wildPtr;                            // 声明一个未初始化的指针变量
    cout << "wildPtr = " << wildPtr << endl; // 输出野指针
}