#include <complex>
#include <iostream>
#include <utility>
using namespace std;

pair<complex<double>, complex<double>> solve(complex<double> a, complex<double> b, complex<double> c) {
    complex<double> delta = b * b - 4.0 * a * c;
    delta = sqrt(delta);
    complex<double> root1 = (-b + delta) / (2.0 * a);
    complex<double> root2 = (-b - delta) / (2.0 * a);
    return {root1, root2};
}

int main() {
    double a, ai, b, bi, c, ci;
    cin >> a >> ai >> b >> bi >> c >> ci;

    complex<double> complex_a(a, ai);
    complex<double> complex_b(b, bi);
    complex<double> complex_c(c, ci);

    auto root = solve(complex_a, complex_b, complex_c);
    complex<double> root1 = root.first;
    complex<double> root2 = root.second;

    if (root1.imag() < 0 && root2.imag() >= 0) {
        swap(root1, root2);
    }

    for (int i = 0; i < 2; ++i) {
        complex<double> root = (i == 0) ? root1 : root2;
        if (root.imag() < 0) {
            printf("(%.2lf-%.2lfi)", root.real(), -root.imag());
        }
        else {
            printf("(%.2lf+%.2lfi)", root.real(), root.imag());
        }
        cout << endl;
    }

    return 0;
}
