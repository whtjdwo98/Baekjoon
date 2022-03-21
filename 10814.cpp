#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
bool cmp(pair<int, string> a, pair<int, string> b);
int main() {
	int N;
	scanf("%d", &N);
	vector<pair<int, string>> member;
	for (int i = 0; i < N; i++) {
		pair<int, string> arr;
		cin >> arr.first >> arr.second;
		member.push_back(arr);
	}
	sort(member.begin(), member.end(), cmp);
	for (int i = 0; i < N; i++) {
		cout << member[i].first << " " << member[i].second << "\n";
	}
	return 0;
}
bool cmp(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;
}