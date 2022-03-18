#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
	int N;
	cin >> N;
	int num = 0;
	int i = 666;
	while (true) {
		int temp = i;
		while (true) {
			if (temp % 1000 == 666) {
				num++;
				break;
			}
			temp /= 10;
			if (temp < 666) break;
		}
		if (num == N) {
			cout << i << endl;
			break;
		}
		i++;
	}

	return 0;
}