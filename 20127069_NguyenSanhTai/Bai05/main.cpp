#include "Ham.h"
using namespace std;
int main() {
	char s[1001];
	int n, k;
	do {
		cout << "Nhap vao so n: ";

		cin.getline(s, 1001);
		 n = strlen(s);
		while ((check(n - 1, s, 0) == 0)) {
			cout << "Nhap lai so n vi n phai la so nguyen va lon hon 0" << endl;
			cout << "Nhap vao so n: ";
			cin.getline(s, 1001);
			n = strlen(s);
		}
		n = convertCharToInt(s, n - 1, 0);

		cout << "Nhap vao so k: ";

		cin.getline(s, 1001);
		 k = strlen(s);
		while ((check(k - 1, s, 0) == 0)) {
			cout << "Nhap lai so k vi k phai la so nguyen va lon hon 0" << endl;
			cout << "Nhap vao so k: ";
			cin.getline(s, 1001);
			k = strlen(s);
		}
		k = convertCharToInt(s, k - 1, 0);
		if (n < k) {
			cout << "Nhap lai n va k vi n khong duoc nho hon k" << endl;
		}
	} while (n < k);
	cout <<"Chinh hop chap "<<k<<" cua "<<n<<" la: "<< Chinhhop(n, k);
}