#include "Ham.h"

int main() {
	char s[1001];
	cout << "Nhap vao so n: ";

	cin.getline(s, 1001);
	int n = strlen(s);
	while ((check(n - 1, s, 0) == 0) || (check(n - 1, s, 0) == 1 && convertCharToInt(s, n - 1, 0) <= 1)) {
		cout << "Nhap lai so n vi n phai la so nguyen va lon hon 1" << endl;
		cout << "Nhap vao so n: ";
		cin.getline(s, 1001);
		n = strlen(s);
	}
	n = convertCharToInt(s, n - 1, 0);

	cout << "So fibonacci thu " << n << ": " << fibo(n);
}