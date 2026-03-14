#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

struct point {
	double x, y;
};

struct circle {
	point pt;
	double radius;

};

void movecircle(circle& c, int x, int y) {
	c.pt.x += x;
	c.pt.y += y;
}

void printcircle(const circle* c) {
	cout << '(' << c->pt.x << ',' << c->pt.y << ')' << ' ' << c->radius << endl;
}


struct circles {
	int size;
	circle c[100];
};

int main() {
	circle c;
	c.pt.x = 9;
	c.pt.y = 8;
	c.radius = 5;

	circles cs = {
		2, {
			{{9, 8}, 5 },
			{{2, 1}, 3 }
		}
	};
	for (int i = 0; i < cs.size; ++i) {
		circle tmp = cs.c[i];
		cout << '(' << tmp.pt.x << ',' << tmp.pt.y << ')' << ' ' << tmp.radius << endl;
	}
	cout << "------" << endl;

	circle b = { {3,5}, 5 };
	movecircle(b, 1, 2);
	printcircle(&b);
	return 0;
}