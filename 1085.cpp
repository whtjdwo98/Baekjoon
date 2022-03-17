#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int x, y, w, h;
	int x_side;
	int y_side;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	x_side = w - x > x ? x : w - x;
	y_side = h - y > y ? y : h - y;
	int min_distance = min(x_side, y_side);
	cout << min_distance;

	return 0;
}