#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <queue>

using namespace std;
struct cmp {
	bool operator()(int a, int b) {
		return a < b;
	}
};
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int test_case;
	scanf("%d", &test_case);

	queue<pair<int, int>> arr;
	vector<int> answer;

	for (int i = 0; i < test_case; i++) {
		int N, M;
		scanf("%d %d", &N, &M);
		int count = 0;
		priority_queue<int, vector<int>, cmp> document;
		pair<int, int> a;
		for (int i = 0; i < N; i++) {
			int priority;
			scanf("%d", &priority);
			document.push(priority);
			a.first = i; 
			a.second = priority;
			arr.push(a);
		}
		while (!arr.empty()) {
			a.first = arr.front().first;
			a.second = arr.front().second;
			arr.pop();
			
			if (document.top() == a.second) {
				document.pop();
				count++;
				if (a.first == M) {
					answer.push_back(count);
					if (!arr.empty()) {
						int N = arr.size();
						for (int i = 0; i <= N; i++) {
							arr.pop();
						}
					}
					break;
				}
			}
			else
				arr.push(a);
		}
	}
	for (int i = 0; i < answer.size(); i++)
		printf("%d\n", answer[i]);
	return 0;
}

