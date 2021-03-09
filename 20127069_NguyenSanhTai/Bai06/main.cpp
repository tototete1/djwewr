#include "Ham.h"

int main() {
	char s[100];
	cout << "Nhap chuoi s: ";
	cin >> s;
	bool res=isPalindrome(0, strlen(s) - 1, s);
	res == 1 ? cout << "Chuoi s la chuoi doi xung" : cout << "Chuoi s khong la chuoi doi xung";
}