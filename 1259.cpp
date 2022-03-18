#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<string> arr;

	while (1){
		string str;
		cin >> str;
		if (str == "0")break;
		arr.push_back(str);
	}
	for (int i = 0; i < arr.size(); i++) {
		int j = 0;
		int k = arr[i].size() - 1;
		while (1) {
			if (j >= k) {
				cout << "yes";
				break;
			}
			if (arr[i][j] == arr[i][k]) {
				j++;
				k--;
			}
			else {
				cout << "no";
				break;
			}
		}
	}
	return 0;
}