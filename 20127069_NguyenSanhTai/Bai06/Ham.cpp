#include "Ham.h"
bool isPalindrome(int left, int right, char s[]) {
	if (left >= right) return true;
	else {
		if (s[left] == s[right]) return isPalindrome(left + 1, right - 1, s);
		if (s[left] != s[right]) return false;
	}
}