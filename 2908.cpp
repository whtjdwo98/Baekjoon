#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;
int swap(int num);

int main() {
	int A, B;
	int AR, BR;
	scanf("%d %d", &A, &B);
	AR = swap(A);
	BR = swap(B);
	if (AR > BR) {
		printf("%d\n", AR);
	}
	else {
		printf("%d\n", BR);
	}
	return 0;
}

int swap(int num) {
	int result = 0;
	
	result += (num % 10) * 100;
	num -= (num % 10);

	result += (num % 100);
	num -= (num % 100);

	result += num / 100;
	return result;
}
