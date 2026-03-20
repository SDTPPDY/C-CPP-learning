#include <iostream>
using namespace std;

class Cmycomplex {
  private:
    int real;
    int imag;

  public:
    Cmycomplex(int r = 0, int i = 0) : real(r), imag(i) {}

    Cmycomplex operator+(const Cmycomplex& other) {
        return Cmycomplex(real + other.real, imag + other.imag);
    }
    Cmycomplex Add(const Cmycomplex& other) {
        real += other.real;
        imag += other.imag;
        return Cmycomplex(real, imag);
    }

    Cmycomplex operator-(const Cmycomplex& other) {
        return Cmycomplex(real - other.real, imag - other.imag);
    }

    Cmycomplex operator*(const Cmycomplex& other) {
        return Cmycomplex(real * other.real - imag * other.imag,
                          real * other.imag + imag * other.real);
    }

    int GetReal() const { return real; }
    int GetImaginary() const { return imag; }

    void Set(int r, int i) {
        real = r;
        imag = i;
    }

    void Show() {
        if (imag >= 0)
            cout << "(" << real << "+" << imag << "i)";
        else
            cout << "(" << real << "-" << -imag << "i)";
    }
};
