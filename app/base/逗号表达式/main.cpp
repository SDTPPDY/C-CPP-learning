#include <iostream>
using namespace std;
// = >> .

int main() {
	int a = 1;
	int b = 2;
	//1.±‰¡øΩªªª
	int tem = a;
	a = b;
	b = tem;
	cout << a << " " << b << endl;

	tem = a,a = b,b = tem;
	cout << a << " " << b;
	return 0;
}