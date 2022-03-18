#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, present = 0;
	cin >> N;
	vector<int> answer_arr;
	vector<int> stack;
	vector<char> answer;

	for (int i = 0; i < N; i++) {
		int M;
		cin >> M;
		answer_arr.push_back(M);
	}
	for (int i = 1; i <= N; i++) {
		stack.push_back(i);
		answer.push_back('+');
		while (!stack.empty() && stack.back() == answer_arr[present]) {
			stack.pop_back();
			answer.push_back('-');
			present++;
		}
	}
	if (!stack.empty()) cout << "NO" << endl;
	else {
		for (int i = 0; i < answer.size(); i++) {
			cout << answer[i] << "\n";
		}
	}
	return 0;
}