#include "Ham.h"
#define c(a,b) cout <<a<<b<<endl;

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
	c("So luong chu so cua n: ", countN(n));
	c("Tong cac chu so cua n: ", sumOfN(n));
	c("Tich cac chu so le cua n: ", ((productOfOdd(n) && haveOdd(n)) ? productOfOdd(n): 0));
	checkEven(n) == 1 ? cout << "So n la so toan so chan" << endl : cout << "So n khong phai la so toan so chan"<<endl;
	checkOdd(n)==1 ? cout << "So n la so toan so le" << endl : cout << "So n khong phai la so toan so le" << endl;
}