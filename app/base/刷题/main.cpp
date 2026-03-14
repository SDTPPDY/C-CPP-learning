/*1089
#include <iostream>
using namespace std;

int main() {
	int a, b;
	while (cin >> a >> b) {
		cout << a + b << endl;
	}
	return 0;
}
*/

/*1090
#include <iostream>
using namespace std;

int main() {
	int a, b, n;
	cin >> n;
	while (n--) {
		cin >> a >> b;
		cout << a + b << endl;
	}
	return 0;
}
*/

/*1091 1095
#include <iostream>
using namespace std;

int main() {
	int a, b;
	while (cin >> a >> b) {
		if (a == 0 && b == 0) {
			break;
		}
		cout << a + b << endl;
	}
	return 0;
}
*/

/*1001
#include <iostream>
using namespace std;

int sum(int n) {
	int add = 0;
	while (n--) {
		add += n;
	}
	return add;
}

int main() {
	int n;
	while (cin >> n) {
		cout << sum(n + 1) << endl;
	}
	return 0;
}
*/

/*
#include <iostream> 
using namespace std;

int main() {
	int n, m, a, b;
	m = 1;
	cin >> n;
	while ((1 <= n) && (n <= 20)) {
		cin >> a >> b;
		cout << "Case " << m << ":" << endl;
		cout << a << " + " << b << " = " << a + b << endl;
		n--;
		m++;
	}
	return 0;
}
*/

/*1092 1094
#include <iostream>
using namespace std;

int main() {
	int n, x, sum;
	while (cin >> n) {
		sum = 0;
		if (n == 0) {
			break;
		}
		while (n--) {
			cin >> x;
			sum += x;
		}
		cout << sum << endl;
	}
	return 0;
}
*/

/*1093 1096 
#include <iostream> 
using namespace std;

int main() {
	int m, n, x, sum;
	cin >> m;
	while (m--) {
		sum = 0;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> x;
			sum += x;
		}
		cout << sum << endl;
		if (m) {
			cout << endl;
		}
	}
	return 0;
}
*/

/*2096
#include <iostream>
using namespace std;

int main() {
	int a, b, n, sum, result;
	cin >> n;
	while (n--) {
		cin >> a >> b;
		if (a < 0 || b < 0) {
			break;
		}
		a = a % 100;
		b = b % 100;
		sum = (a + b) % 100;
		cout << sum << endl;
	}
	return 0;
}
*/

/*2033
#include <iostream>
using namespace std;

int main() {
	int n, AH, AM, AS, BH, BM, BS;
	cin >> n;
	while (n--) {
		cin >> AH >> AM >> AS >> BH >> BM >> BS;
		if (AH >= 60 || AM >= 60 || AS >= 60 || BH >= 60 || BM >= 60 || BS >= 60) {
			break;
		}
		int s = AS + BS;
		int m = AM + BM;
		int h = AH + BH;
		m += s / 60;
		s %= 60;
		h += m / 60;
		m %= 60;
		cout << h << " " << m << " " << s << endl;

	}
	return 0;
}
*/

/*2075
#include <iostream>
using namespace std;

int main() {
	int n, a, b, rst;
	cin >> n;
	while (n--) {
		cin >> a >> b;
		rst = a % b;
		if (!rst) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
*/

/*2055
#include <iostream>
using namespace std;

int f(char arp) {
	int result;
	if (int(arp) >= 97) {
		int x = arp - 96;
		x = -x;
		result = x;
	}
	else {
		result = arp - 64;
	}
	return result;
}

int main() {
	int t, y;
	char x;
	cin >> t;
	while (t--) {
		cin >> x >> y;
		cout << f(x) + y << endl;
	}
	return 0;
}
*/

/*2052
#include <iostream> 
using namespace std;

int main() {
	int x, y;
	while (cin >> x >> y) {
		cout << "+";
		for (int i = 0; i < x; i++) {
			cout << "-";
			if (i == x - 1) {
				cout << "+";
			}
		}
		while (y--) {
			cout << endl << "|";
			for (int i = 0; i < x; i++) {
				cout << " ";
			}
			cout << "|";
		}
		cout << endl;
		cout << "+";
		for (int i = 0; i < x; i++) {
			cout << "-";
			if (i == x - 1) {
				cout << "+";
			}
		}
		cout << endl << endl;
	}
	return 0;
}
*/

/*2004
#include <iostream>
using namespace std;

int main() {
	int score;
	while (cin >> score) {
		if (score <= 100 && score >= 90) {
			cout << "A" << endl;
		}
		else if (score < 90 && score >= 80) {
			cout << "B" << endl;
		}
		else if (score < 80 && score >= 70) {
			cout << "C" << endl;
		}
		else if (score < 70 && score >= 60) {
			cout << "D" << endl;
		}
		else if (score < 60 && score >= 0) {
			cout << "E" << endl;
		}
		else {
			cout << "Score is error!" << endl;
		}
	}
	return 0;
}
*/

/*2071
#include <iostream>
using namespace std;

int main() {
	int t, n;
	double x, max;
	
	cin >> t;
	while (t--) {
		max = 0.00;
		cin >> n;
		while (n--) {
			cin >> x;
			if (x > max) {
				max = x;
			}
		}
		printf("%.2f\n", max);
	}
}
*/

/**/