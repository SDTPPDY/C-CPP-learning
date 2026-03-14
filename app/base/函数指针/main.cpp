#include <iostream>
using namespace std;

double (*ptrq)(int a, int b, int c);
//void (*ptr1)(int a, int b);
typedef void (*ptr)(int a, int b);  //定义了一个函数类型(只有void类型)!!!


double func(int a, int b, int c) {
    cout << a << "," << b << "," << c << endl;
    return 0.0;
}

void func1(int a, int b) {
    cout << a << "," << b << endl;
}

int main() {
    ptrq = func;
    ptrq(4, 5, 6);
    // ptr = func1; 
    ptr ptr1 = func1;
    ptr1(5, 6);

    return 0;
}