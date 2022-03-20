#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int main() {
	int N;
	int result = 0;
	scanf("%d", &N);
	//분해합
	// M의 분해합 이 N 인 경우 M 을 N의 생성자
	// 245 의 분해합은 256 이다 245는 256의 생성자

	for (int i = 1; i <= N; i++) {
		int num = i;
		result = num;
		while (num != 0) {
			result += num % 10;
			num = num / 10;
		}
		if (result == N) {
			cout << i << "\n";
			return 0;
		}
		else result = 0;
	}
	cout << 0 << "\n";


	return 0;
}