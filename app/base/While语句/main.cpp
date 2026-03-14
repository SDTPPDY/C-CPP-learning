#include <iostream>
#include <string>
using namespace std;

int main() {
	int count = 1;
	while (count <= 100) {
		cout << count << ".I love you!" << endl;
		count += 1;
	}
	string a;
	while (cin >> a) {
		cout << a + "写算法" << endl;
	}	//ctrl + c 就是结束

	return 0;
}