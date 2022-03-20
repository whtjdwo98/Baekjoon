#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int N;
	scanf("%d", &N);

	vector<string> arr;
	
	for (int i = 0; i < N; i++) {
		string input;
		cin >> input;
		arr.push_back(input);
	}
	for (int i = 0; i < arr.size(); i++) {
		int num = 0;
		bool sequence = false;
		for (int j = 0; j < arr[i].size(); j++) {
			if (arr[i][j] == '(')
				num++;
			else {
				num--;
				if (num < 0) {
					sequence = true;
					break;
				}
			}
		}
		if (num == 0 && sequence == false)
			cout << "YES" << "\n";
		else if (sequence == true || num != 0) {
			cout << "NO" << "\n";
			sequence = false;
		}

	}
	return 0;
}