#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b);
int main() {
	int N;
	int num;
	vector<int> arr;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		arr.push_back(num);
	}
	sort(arr.begin(), arr.end(), cmp);
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << "\n";
	}
	return 0;
}
bool cmp(int a, int b){
	return a < b;
}