#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool possible(vector<long long> lan, long long mid, int N);

int main() {
	int K, N;
	vector<long long> lan;
	cin >> K >> N;

	for (int i = 0; i < K; i++) {
		int A;
		cin >> A;
		lan.push_back(A);
	}	
	
	long long max_length = *max_element(lan.begin(), lan.end());
	long long min_length = 1;
	long long result = 0;

	while (min_length <= max_length) {
		long long mid = (max_length + min_length) / 2;

		if (possible(lan, mid, N)) {
			if (mid > result) result = mid;
			min_length = mid + 1;
		}
		else {
			max_length = mid - 1;
		}
	}
	cout << result << endl;
	return 0;
}
bool possible(const vector<long long> lan, long long mid, int N) {
	int M = 0;
	for (int i = 0; i < lan.size(); i++) {
		M += lan[i] / mid;
	}
	if (M >= N) return true;
	return false;
}