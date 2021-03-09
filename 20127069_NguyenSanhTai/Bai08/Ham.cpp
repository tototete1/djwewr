#include "Ham.h"

bool check(int n, char s[], bool isFloat)
{
	//if (s[n] == '\n') return false;
	if (n == 0) return ((int(s[n]) >= 48 && int(s[n]) <= 57)) ? true : false;
	if (isFloat == 1) {
		if (s[n] == '.') {
			check(n - 1, s, 0);
		}
		else if ((int(s[n]) >= 48 && int(s[n]) <= 57)) check(n - 1, s, 1);
		else return false;
	}
	else {
		if (int(s[n]) >= 48 && int(s[n]) <= 57) check(n - 1, s, 1);
		else return false;
	}
}
int convertCharToInt(char s[], int n, bool isFloat) {
	int u = 10;
	int isDot = 0;
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i <= n; i++) {

		if (isFloat == 1) {
			if (s[i] == '.') isDot = 1;
			else {
				if (!isDot) sum1 = sum1 * 10 + (s[i] - '0');
				else {
					sum2 = sum2 + (s[i] - '0') * (1 / (u));
					u *= 10;
				}
			}
		}
		if (isFloat == 0) {
			sum1 = sum1 * 10 + int(s[i] - '0');
		}
	}
	return sum1 + sum2;
}

void print(int n, int a[]) {
	if (n == -1) return;
	print(n - 1, a);
	cout << a[n]<<" ";
}


void printReverse(int n, int a[]) {
	if (n == -1) return;
	cout << a[n] << " ";
	print(n - 1, a);
}

int findMax(int n, int a[]) {
	if (n == 0) return a[0];
	int max = findMax(n - 1, a);
	if (max > a[n]) return max;
	return a[n];
}

int findMin(int n, int a[]) {
	if (n == 0) return a[0];
	int min = findMin(n - 1, a);
	if (min < a[n]) return min;
	return a[n];
}

int sumOfPlusNumber(int n, int a[]) {
	if (n == 0) {
		return (a[n] > 0 ? a[n] : 0);
	}
	return (a[n] > 0 ? a[n] + sumOfPlusNumber(n - 1, a) : 0 + sumOfPlusNumber(n - 1, a));
}

bool isArrayEven(int n, int a[]) {
	if (n == 0) return (a[n] % 2 == 0 ? true : false);
	return (a[n] % 2 == 0 ? isArrayEven(n - 1, a) : false);
}

