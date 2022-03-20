#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;
//유클리드 호제법
int gcd(int num1, int num2);
int main() {
	int GCD, LCM;
	int num1, num2;

	scanf("%d %d", &num1, &num2);
	GCD = gcd(num1, num2);
	LCM = (num1 / GCD) * (num2 / GCD) * GCD;


	cout << GCD << " " << LCM << "\n";
	return 0;
}
int gcd(int num1, int num2) {
	int a, b, c;
	a = num1, b = num2;
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}