#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int fibonacci(int n, vector<int> &arr_fibonacci);
int main() {
	int test_num;
	scanf("%d", &test_num);
	vector<int> test_case(test_num);
	
	for (int i = 0; i < test_num; i++) {
		scanf("%d", &test_case[i]);
	}
	vector<int> arr_fibonacci(*max_element(test_case.begin(), test_case.end())+1);
	
	fibonacci(*max_element(test_case.begin(), test_case.end()), arr_fibonacci);
	
	for (int i = 0; i < test_num; i++) {
		if (test_case[i] == 0) printf("1 0\n");
		else if (test_case[i] == 1) printf("0 1\n");
		else
			printf("%d %d\n", arr_fibonacci[test_case[i] - 1], arr_fibonacci[test_case[i]]);
	}
	return 0;
}
int fibonacci(int n, vector<int> &arr_fibonacci) {
	if (n == 0) {
		arr_fibonacci[0] = 0;
		return 0;
	}
	else if (n == 1) {
		arr_fibonacci[1] = 1;
		return 1;
	}
	else if (arr_fibonacci[n] != 0) {
		return arr_fibonacci[n];
	}
	else {
		return arr_fibonacci[n] = fibonacci(n - 1, arr_fibonacci) + fibonacci(n - 2, arr_fibonacci);
	}
}
