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

int Chinhhop(int n, int k) {
	if (k == 1) return n;
	if (n == k) return 1;
	return Chinhhop(n - 1, k) + Chinhhop(n - 1, k - 1);
}