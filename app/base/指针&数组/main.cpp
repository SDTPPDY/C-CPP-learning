#include <iostream>
using namespace std;

int main() {
    int* ptr = new int[5];
    int arr[5];
    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
        arr[i] = (i + 1) * 10;
    }

    cout << "动态分配的数组: ";
    for (int i = 0; i < 5; i++) {
        cout << ptr[i] << ' ';
    }

    cout << endl;
    cout << "静态分配的数组: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
    delete[] ptr; // 释放动态分配的内存
}