#include <iostream> 
using namespace std;

int main() {
	int i = 1;
	i++; // i = i + 1
	cout << i << endl;
	++i;
	cout << i << endl;
	int j = 6;
	int x = j++;
	int y = ++j; //效率更高
	cout << x << endl << y << endl;
	return 0;
}