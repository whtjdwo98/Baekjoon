#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int year;

	scanf("%d", &year);

	if (year % 4 == 0 && year % 100 != 0)	printf("1\n"); 
	else if (year % 400 == 0)	printf("1\n");
	else printf("0\n");

	return 0;
}
