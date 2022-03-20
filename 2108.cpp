#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
bool com(int a, int b);

int main() {
	int N;
	int mean, median, mode, range;
	double total = 0;
	scanf("%d", &N);
	vector<int> num;
	int frequency[8001]{0, };
	bool first_num = false;
	for (int i = 0; i < N; i++) {
		int a;
		scanf("%d", &a);
		num.push_back(a);
		total += a;
		frequency[a + 4000]++;
	}
	sort(num.begin(), num.end(), com);
	//mean = (total / N) + 0.5;   //반올림한거 계산?
	mean = round((float)total / N);
	median = num[num.size() / 2];
	int max = *(--num.end());
	int min = *num.begin();
	range = max - min;
	int max_frequency = 0;
	for (int i = 0; i < 8001; i++) {
		if (first_num != true && max_frequency == frequency[i]) {
			first_num = true;
			mode = i - 4000;
			
		}
		if (max_frequency < frequency[i]) {
			max_frequency = frequency[i];
			first_num = false;
			mode = i - 4000;
		}
	}
	cout << mean << "\n" << median << "\n" << mode << "\n" << range << "\n";
	return 0;
}
bool com(int a, int b) {
	return a < b;
}