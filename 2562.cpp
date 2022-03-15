#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <vector>

using namespace std;

int find_max(vector<int> arr, int *max);
int main() {
	int max = 0, index;
	vector<int> arr(9);

	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
	}
	index = find_max(arr, &max);
	printf("%d\n", max);
	printf("%d\n", index);
	return 0;
}

int find_max(vector<int> arr, int *max) {
	*max = arr[0];
	int index = 0;
	for (int i = 1; i < 9; i++) {
		if (*max < arr[i]) {
			*max = arr[i];
			index = i+1;
		}
	}
	return index;
}