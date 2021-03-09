#include "Ham.h"

int main() {
	char s[101];
	cout << "Nhap so x: ";
	cin.getline(s,1001);

	float x = strlen(s);
	while (check(x - 1, s, 1) == 0) {
		cout << "Nhap lai so x vi n phai la so thuc hoac so nguyen va lon hon 0" << endl;
		cout << "Nhap vao so x: ";
		cin.getline(s, 1001);
		x = strlen(s);
	}
	x = convertCharToInt(s, x - 1, 1);

	cout << "Nhap so n: ";
	cin.getline(s, 1001);

	int n = strlen(s);
	while (check(n - 1, s, 1) == 0) {
		cout << "Nhap lai so n vi n phai la so nguyen va lon hon 0" << endl;
		cout << "Nhap vao so n: ";
		cin.getline(s, 1001);
		n = strlen(s);
	}
	n = convertCharToInt(s, n - 1, 1);

	cout << "Cau 12: " << cau_12(x,n) << endl;
	cout << "Cau 13: " << cau_13(x,n) << endl;
	cout << "Cau 14: " << cau_14(x,n) << endl;
	cout << "Cau 15: " << cau_15(n) << endl;
	cout << "Cau 16: " << cau_16(x,n) << endl;
	cout << "Cau 17: " << cau_17(x,n) << endl;
	cout << "Cau 18: " << cau_18(x,n) << endl;
	cout << "Cau 19: " << cau_19(x,n) << endl;
	system("pause");

	
}