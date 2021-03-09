#include "Ham.h"

int main() {
	char s[1001];
	cout << "Nhap vao so n: ";
	
	cin.getline(s,1001);
	int n = strlen(s);
	while (check(n-1,s,0)==0) {
		cout << "Nhap lai so n vi n phai la so nguyen va lon hon 0" << endl;
		cout << "Nhap vao so n: ";
		cin.getline(s,1001);
		n = strlen(s);
	}
	n = convertCharToInt(s, n-1, 0);

	cout << "Cau 1: " << cau_1(n) << endl;
	cout << "Cau 2: " << cau_2(n) << endl;
	cout << "Cau 3: " << cau_3(n) << endl;
	cout << "Cau 4: " << cau_4(n) << endl;
	cout << "Cau 5: " << cau_5(n) << endl;
	cout << "Cau 6: " << cau_6(n) << endl;
	cout << "Cau 7: " << cau_7(n) << endl;
	cout << "Cau 8: " << cau_8(n) << endl;
	cout << "Cau 9: " << cau_9(n) << endl;
	cout << "Cau 11: " << cau_11(n) << endl;

	system("pause");
}