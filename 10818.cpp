#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <vector>
#include <stdlib.h>
using namespace std;

int Find_min_max(vector<int> arr, bool mode);

int main() {
	int test_case;
	scanf("%d", &test_case);
	vector<int>min_max(test_case);
	for (int i = 0; i < test_case; i++) {
		scanf("%d", &min_max[i]);
	}
	printf("%d %d\n", Find_min_max(min_max, true), Find_min_max(min_max, false));
	return 0;
}
int Find_min_max(vector<int> arr, bool mode) {
	int temp = arr[0];
	
	if (mode == true) {
		for (int i = 1; i < (int)arr.size(); i++) {
			if (temp < arr[i]) temp = arr[i];
		}
	}
	else {
		for (int i = 1; i < (int)arr.size(); i++) {
			if (temp > arr[i]) temp = arr[i];
		}
	}
	return temp;
}
