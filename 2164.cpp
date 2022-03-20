#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	int N;
	queue <int> card;

	scanf_s("%d", &N, sizeof(N));
	
	for (int i = 1; i <= N; i++) {
		card.push(i);
	}

	while (card.size() != 1) {
		int back;
		card.pop();
		back = card.front();
		card.pop();
		card.push(back);
	}
	cout << card.front() << "\n";
	return 0;
}