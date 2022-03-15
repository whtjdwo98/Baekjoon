#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <vector>
using namespace std;


int main() {
	int test_num;
	scanf("%d", &test_num);
	int A, B;
	vector<int>arr(test_num);

	for (int i = 0; i < test_num; i++) {
		scanf("%d %d", &A, &B);
		arr[i] = A + B;
	}
	for (int i = 0; i < test_num; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}
