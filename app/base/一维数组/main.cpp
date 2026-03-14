#include <iostream> 
using namespace std;

int main() {
	int a[1024] = {1,2,3,4,5};
	double b[520];
	char c[1314];
	//a[0], a[1]

	//访问 从0开始
	for(int i = 0; i < 5; ++i) {
		cout << a[i] << endl;
	}
	// 3. 逆序输出
	// 输入一个 n(n < 100)，和 n 个数，请逆序输出这个 n 个数
	int n;
	char x[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	for (int i = n - 1; i >= 0; i--) {
		cout << x[i] << " ";
	}

	return 0;
}