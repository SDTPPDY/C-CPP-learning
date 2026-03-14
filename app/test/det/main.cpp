#include <iostream>
#include <cmath>
using namespace std;

double det(double** mx, int n) {
    if (n == 1) {
        return mx[0][0];
    }

    double** tmp = new double* [n - 1];
    for (int i = 0; i < n - 1; i++) {
        tmp[i] = new double[n - 1];
    }

    double ret = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - 1; ++j) {
            for (int k = 0; k < n - 1; ++k) {
                if (k < i) {
                    tmp[j][k] = mx[j + 1][k];
                }
                else {
                    tmp[j][k] = mx[j + 1][k + 1];
                }
            }
        }
        ret += pow(-1, i) * mx[0][i] * det(tmp, n - 1);
    }

    for (int i = 0; i < n - 1; i++) {
        delete[] tmp[i];
    }
    delete[] tmp;

    return ret;
}

double** inputMatrix(int n) {
    double** mx = new double* [n];
    for (int i = 0; i < n; i++) {
        mx[i] = new double[n];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
        cin >> mx[i][j];
        }
    }
    return mx;  
}

void printMatrix(double** mx, int n) {
    for (int i = 0; i < n; i++) {
        cout << "| ";
        for (int j = 0; j < n; j++) {
            cout << mx[i][j] << " ";
        }
        cout << '|';
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    double** mx = inputMatrix(n);
    printMatrix(mx, n);
    cout << det(mx, n) << endl;
    return 0;
}