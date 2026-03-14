#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int a, b;
    cin >> a >> b;
    int c = add(a, b);
    cout << a << " + " << b << " = " << c << endl;
    return 0;
}