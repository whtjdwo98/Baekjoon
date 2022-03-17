#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
void init(vector<vector<char>> &arr);
int paint(vector<vector<char>> arr, int N, int M);
int compare(vector<vector<char>> arr, vector<string> B_W, int x, int y);
int main() {
	int N= 0, M = 0;
	scanf("%d %d", &N, &M);
	vector<vector<char>> arr(N, vector<char>(M+1));
	init(arr);
	printf("%d\n", paint(arr, N, M));
	return 0;
}
void init(vector<vector<char>> &arr) {
	for (int i = 0; i < arr.size(); i++) {
		cin >> &arr[i][0];
	}
}
int paint(vector<vector<char>> arr, int N, int M) {
	int answer = -1;
	int temp;
	vector<int> start_point(2, 0);
	vector<string> F_white = {	"WBWBWBWB",
								"BWBWBWBW",
								"WBWBWBWB",
								"BWBWBWBW",
								"WBWBWBWB",
								"BWBWBWBW",
								"WBWBWBWB",
								"BWBWBWBW"};
	vector<string> F_Black = {	"BWBWBWBW",
								"WBWBWBWB",
								"BWBWBWBW",
								"WBWBWBWB",
								"BWBWBWBW",
								"WBWBWBWB",
								"BWBWBWBW",
								"WBWBWBWB" };
	for (int i = 0; i + 8 <= N; i++) {
		for (int j = 0; j + 8 <= M; j++) {
			temp = min(compare(arr, F_white, i, j), compare(arr, F_Black, i, j));
			if (answer == -1) answer = temp;
			else if (answer > temp) answer = temp;
		}
	}
	return answer;
}
int compare(vector<vector<char>> arr, vector<string> B_W, int x, int y) {
	int answer = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (arr[x + i][y + j] != B_W[i][j]) answer++;
		}
	}
	return answer;
}