#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int Test_case;
	int H, W, N;
	scanf("%d", &Test_case);
	vector<vector<int>> hotel;
	for (int i = 0; i < Test_case; i++) {
		vector<int> arr;
		scanf("%d %d %d", &H, &W, &N);
		arr.push_back(H);
		arr.push_back(W);
		arr.push_back(N);
		hotel.push_back(arr);
	}
	for (int i = 0; i < Test_case; i++) {
		int result_floor = hotel[i][2] % hotel[i][0];
		if (result_floor == 0) result_floor = hotel[i][0];
		int result_room = ceil((float)hotel[i][2] / hotel[i][0]);

		if (result_room < 10) {
			cout << result_floor << 0 << result_room << "\n";
		}
		else {
			cout << result_floor << result_room << "\n";
		}
	}
	return 0;
}