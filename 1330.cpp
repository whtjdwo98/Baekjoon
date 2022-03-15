#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int compare(int A, int B);

int main() {
	int A, B;
	int result;
	scanf("%d %d", &A, &B);
	result = compare(A, B);
	switch (result) {
		case 1:
			printf(">\n");
			break;
		case -1:
			printf("<\n");
			break;
		case 0:
			printf("=\n");
			break;
	}

	return 0;
}
int compare(int A, int B) {
	if (A > B)	return 1;
	else if (A < B) return -1;
	else return 0;
}