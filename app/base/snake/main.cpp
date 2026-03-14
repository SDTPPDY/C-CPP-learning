#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
using namespace std;

// 定义长宽
#define h 28
#define w 60

enum block_type {
	empty = 0,
	food = 1
};

// 地图
struct Map	{
	block_type data[h][w];
	bool has_food;
};

void draw_map(Map& map) {
	system("cls");
	cout << "┏";
	for (int x = 0; x < w; ++x) {
		cout << "━";
	}
	cout << "┓";
	cout << endl;
	for (int y = 0; y < h; ++y) {
		cout << "┃";
		for (int x = 0; x < w; ++x) {
			if (map.data[y][x] == block_type::empty) {
				cout << " ";
			}

		}
		cout << "┃";
		cout << endl;
	}
	cout << "┗";
	for (int i = 0; i < w; ++i) {
		cout << "━";
	}
	cout << "┛";

}

// 蛇
struct pos {
	int x;
	int y;
};

struct Snake {
	pos _snake[h * w];
	int length;
	int dir;
	int last_move_time;
	int move_frequency;
};

// 蛇和地图的初始化
void init_map(Map& map) {
	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			map.data[i][j] = block_type::empty;
		}
	}
	map.has_food = false;
}

void init_snake(Snake& snk) {
	snk.dir = 1;
	snk.length = 1;
	snk.last_move_time = 0;
	snk.move_frequency = 500;
	snk._snake[0] = { h / 2, w / 2 }; 
}

// 鼠标的隐藏
void hide_cursor() {
	HANDLE h_out_put = GetStdHandle(STD_OUTPUT_HANDLE);

}

int main() {
	Map map;
	Snake snk;
	init_map(map);
	init_snake(snk);
	draw_map(map);
	while (1) {

	}
	
	return 0;
}