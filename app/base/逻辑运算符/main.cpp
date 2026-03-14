#include <iostream>
using namespace std;

/*

&&	与(有假必假）
||	或(有真必真)
!	非(非真即假，非假即真)
! >> && >> || 

*/
int main() {
	cout << (2 && 1) << endl;
	cout << (1 || 0) << endl;
	cout << (!1) << endl;
	cout << !0 << endl;
	return 0;
}