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

int countN(int n) {
	if (n < 10) {
		return 1;
	}
	return 1 + countN(n / 10);
}

int sumOfN(int n) {
	if (n < 10) {
		return n;
	}
	return n % 10 + sumOfN(n / 10);
}
int productOfOdd(int n) {
	if (n < 10) {
		if (n % 2 == 0) return 1;
		else return n;
	}
	else {
		if (n % 2 == 0) return 1 * productOfOdd(n / 10);
		return (n % 10) * (productOfOdd(n / 10));
	}
}

bool haveOdd(int n) {
	if (n < 10)
	{
		return n % 2 != 0 ? true : false;
	}
	return ((n % 10) % 2) != 0 ? true : haveOdd(n / 10);
}

bool checkEven(int n) {
	if (n < 10)
	{
		return (n % 2 == 0);
	}
	return (((n % 10) % 2 == 0) ? checkEven(n / 10) : false);
}
bool checkOdd(int n) {
	if (n < 10) {
		return (n % 2 != 0);
	}
	return (((n % 10) % 2 != 0) ? checkOdd(n / 10) : false);
}
