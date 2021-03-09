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
float convertCharToInt(char s[], int n, bool isFloat) {
	int u = 10;
	int isDot = 0;
	int sum1 = 0;
	float sum2 = 0;
	for (int i = 0; i <= n; i++) {

		if (isFloat == 1) {
			if (s[i] == '.') isDot = 1;
			else {
				if (!isDot) sum1 = sum1 * 10 + (s[i] - '0');
				else {
					sum2 = sum2 + (s[i] - '0') * (1.0 / (u));
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

float cau_12(float x, int n) {
	if (n == 1) return x*1.0;
	return pow(x, n)*1.0 + cau_12(x, n - 1);
}
float cau_13(float x, int n) {
	if (n == 1) return (x * x)*1.0;
	return pow(x, 2 * n)*1.0 + cau_13(x, n - 1);
}
float cau_14(float x, int n) {
	if (n == 0) return x*1.0;
	return pow(x, 2 * n + 1)*1.0 + cau_14(x, n - 1);
}
float cau_15(int n) {
	if (n == 1) return 1.0;
	return float(1.0 / (tong(n)) + cau_15(n - 1));
}
float cau_16(float x, int n) {
	if (n == 1) return x;
	return float(1.0 * pow(x, n) / (tong(n))) + cau_16(x, n - 1);
}
float cau_17(float x, int n) {
	if (n == 1) return x;
	return float(1.0 * pow(x, n) / giaithua(n)) + cau_17(x, n - 1);
}
float cau_18(float x, int n) {
	if (n == 0) return 1;
	return float(1.0 * pow(x, 2 * n) / giaithua(2 * n)) + cau_18(x, n - 1);
}
float cau_19(float x,int n) {
	if (n == 0) return 1 + x;
	return float(1.0 * pow(x, 2 * n + 1) / giaithua(2 * n + 1)) + cau_19(x, n - 1);
}

long long int tong(int n) {
	if (n == 0) return 0;
	return n + tong(n - 1);
}

long long int giaithua(int n) {
	if (n == 1) return 1;
	return n * giaithua(n - 1);
}