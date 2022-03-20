#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(int a, int b);

int main() {
	int a, b, c;
	
	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		vector<int> arr;
		arr.push_back(a);
		arr.push_back(b);
		arr.push_back(c);


		if (a == 0 && b == 0 && c == 0)
			break;
		else if (a == 0 || b == 0 || c == 0)
			cout << "wrong" << "\n";
		else {
			sort(arr.begin(), arr.end(), cmp);
			if (arr[0] * arr[0] == arr[1] * arr[1] + arr[2] * arr[2]) 
				cout << "right" << "\n";
			else 
				cout << "wrong" << "\n";
		}
	}

	return 0;
}
bool cmp(int a, int b) {
	return a > b;
}