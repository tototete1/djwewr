#include "Ham.h"

int main() {
	char s[1001];
	cout << "Nhap vao so n: ";

	cin.getline(s, 1001);
	int n = strlen(s);
	while ((check(n - 1, s, 0) == 0)) {
		cout << "Nhap lai so n vi n phai la so nguyen va lon hon 0" << endl;
		cout << "Nhap vao so n: ";
		cin.getline(s, 1001);
		n = strlen(s);
	}
	n = convertCharToInt(s, n - 1, 0);
	cout << "X( " << n << " ) co gia tri: " << X(n) << endl;
	cout << "Y( " << n << " ) co gia tri: " << Y(n);
}