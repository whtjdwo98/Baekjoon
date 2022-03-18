#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void init(int N, vector<string> &arr);
bool compare(string a, string b);

int main() {
	int N;
	cin >> N;
	vector<string> arr;
	init(N, arr);
	sort(arr.begin(), arr.end(), compare);
	for (int i = 0; i < arr.size(); i++) cout << arr[i] << "\n";
	return 0;
}
void init(int N, vector<string> &arr) {
	string str;
	for (int i = 0; i < N; i++) {
		cin >> str;
		if (find(arr.begin(), arr.end(), str) == arr.end())
			arr.push_back(str);
	}
}
bool compare(string a, string b) {
	if (a.size() == b.size())
		return a < b;
	return a.size() < b.size();
}