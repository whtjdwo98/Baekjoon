#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, M;
	vector<long long> A;
	vector<long long> B;

	cin >> N;
	for (int i = 0; i < N; i++) {
		long long Aa;
		cin >> Aa;
		A.push_back(Aa);
	}
	cin >> M;
	for (int i = 0; i < M; i++) {
		long long Aa;
		cin >> Aa;
		B.push_back(Aa);
	}

	sort(A.begin(), A.end());

	
	for (int i = 0; i < M; i++) {
		bool present = false;
		int low = 0;
		int high = N - 1;
		while (low <= high) {
			int mid = (low + high) / 2;
			if (B[i] > A[mid]) {
				low = mid +1;
			}
			else if (B[i] < A[mid]) {
				high = mid - 1;
			}
			else {
				present = true;
				break;
			}
		}

		if (present) {
			cout << 1 << "\n";
		}
		else {
			cout << 0 << "\n";
		}

	}


	return 0;
}

