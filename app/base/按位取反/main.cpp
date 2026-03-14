#include <iostream> 
using namespace std;
//   ~
int main() {
	int a = 0b00000000000000000000000000000001;
	int b = 0b11111111111111111111111111111110;
	cout << ~a << "   " << b << endl;
	return 0;
}