#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int A, B, C, D, E;
	int result;

	scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

	result = (A*A) + (B*B) + (C*C) + (D*D) + (E*E);
	printf("%d\n", result % 10);
	return 0;
}