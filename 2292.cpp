#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	if (N == 1) {
		cout << 1 << "\n";
	}
	int i =1;
	int result = 1;
	while (1) {
		result += i * 6;
		i++;
		if (result >= N) {
			cout << i << "\n";
			break;
		}
	}
	return 0;
}