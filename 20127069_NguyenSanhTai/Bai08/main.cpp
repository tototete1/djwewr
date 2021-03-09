#include "Ham.h"
#define c(a,b) cout <<a<<b<<endl;
int main() {
	int a[10001];
	char s[1001];
	cout << "Nhap vao so n: ";

	cin.getline(s, 1001);
	int n = strlen(s);
	while ((check(n - 1, s, 0) == 0)) {
		cout << "Nhap lai so n vi n phai la so nguyen va lon hon 1" << endl;
		cout << "Nhap vao so n: ";
		cin.getline(s, 1001);
		n = strlen(s);
	}
	n = convertCharToInt(s, n - 1, 0);
	cout << "Nhap mang a"<<endl;
	for (int i = 0; i < n; i++) {
		cout << "Nhap so a[ " << i + 1 << " ] : ";
		cin >> a[i];
	}

	cout << "In mang a tu 1 den n" << endl;
	for (int i = 0; i < n; i++) {
		cout << "a[ " << i + 1 << " ]: " << a[i] << endl;
	}
	
	cout << "In nguoc mang a tu n den 1" << endl;
	for (int i = n - 1; i >= 0; i--) {
		cout << "a[ " << i + 1 << " ]: " << a[i] << endl;
	}

	c("So lon nhat mang: ", findMax(n - 1, a));

	c("So nho nhat mang: ", findMin(n - 1, a));

	c("Tong cac so duong trong mang: ", sumOfPlusNumber(n - 1, a));
	
	isArrayEven(n - 1, a) == 1 ? cout << "Mang chua toan so chan" << endl : cout << "Mang khong chua toan so chan";
}