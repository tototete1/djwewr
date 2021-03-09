#include "Ham.h"
bool check(int n, char s[],bool isFloat)
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
int convertCharToInt(char s[],int n, bool isFloat) {
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
int cau_1(int n) {
	if (n == 0) {
		return 0;
	}
	return n + cau_1(n - 1);
}

int cau_2(int n) {
	if (n == 0)
	{
		return 0;
	}
	return n * n + cau_2(n - 1);
}

float cau_3(int n) {
	if (n == 0) {
		return 0;
	}
	return float(1.0 / n) + cau_3(n - 1);
}
float cau_4(int n) {
	if (n == 0) return 0;
	return float(1.0 / (2 * n)) + cau_4(n - 1);
}
float cau_5(int n) {
	if (n == 0) return 1;
	return float(1.0 / (2 * n + 1)) + cau_5(n - 1);
}
float cau_6(int n) {
	if (n == 0) return 0;
	return float(1.0 / (n * (n + 1))) + cau_6(n - 1);
}

float cau_7(int n) {
	if (n == 0) return 0;
	return float(n * 1.0 / (n + 1)) + cau_7(n - 1);
}

float cau_8(int n) {
	if (n == -1) return 0;
	return float(1.0 * (2 * n + 1) / (2 * n + 2) * 1.0) + cau_8(n - 1);
}

long long int cau_9(int n) {
	if (n == 0) return 1;
	return n * cau_9(n - 1);
}

long long int cau_11(int n) {
	if (n == 0) return 0;
	return cau_9(n - 1) * n + cau_11(n - 1);
}