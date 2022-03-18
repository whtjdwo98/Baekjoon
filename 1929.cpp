#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void prime(vector<bool> &Natural_number, int num, int end);
int main() {
	int M, N;
	cin >> M >> N;
	vector<bool> Natural_number(N + 1, true);  //소수일 경우만 true 
	Natural_number[0] = false;
	Natural_number[1] = false;
	
	for (int i = 2; i <= sqrt(N); i++) {
	//for (int i = 2; i <= N; i++) {
		if(Natural_number[i] == true)
			prime(Natural_number, i, N);
	}
	for (int i = M; i <= N; i++) {
		if (Natural_number[i]) cout << i << "\n";
	}
	return 0;
}
void prime(vector<bool> &Natural_number, int num, int end) {
	// 에라토스테네스의 체
	for (int i = 2; num * i <= end; i++) {
		Natural_number[num * i] = false;
	}
}