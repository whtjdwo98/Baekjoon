#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> num(10);
	int temp, result = 10;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &temp);
		num[i] = temp % 42;
	}
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (num[i] == num[j]) {
				result--;
				break;
			}
		}
	}
	printf("%d\n", result);
	return 0;
}
