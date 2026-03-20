#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

class Fraction {
    int under;
    int above;

    double value() const {
        return static_cast<double>(above) / under;
    }

  public:
    Fraction(int a = 1, int u = 1) : under(u), above(a) {}
    Fraction(double val) {
        under = 1000;
        above = static_cast<int>(val * under);
        int g = gcd(under, above);
        under /= g;
        above /= g;
    }

    Fraction operator+(const Fraction& other) const {
        int new_under = under * other.under;
        int new_above = above * other.under + other.above * under;

        int g = gcd(new_under, new_above);
        new_under /= g;
        new_above /= g;

        return Fraction(new_above, new_under);
    }

    Fraction operator-(const Fraction& other) const {
        int new_under = under * other.under;
        int new_above = above * other.under - other.above * under;

        int g = gcd(new_under, new_above);
        new_under /= g;
        new_above /= g;

        return Fraction(new_above, new_under);
    }

    double to_double() const {
        return value();
    }

    void Show() {
        if (under < 0) {
            under = -under;
            above = -above;
        }
        cout << above << "/" << under;
    }
};

void fswap(Fraction& a, Fraction& b) {
    Fraction temp = a;
    a = b;
    b = temp;
}

void ifLessSwap(Fraction& a, Fraction& b) {
    if (a.to_double() < b.to_double()) {
        fswap(a, b);
    }
}