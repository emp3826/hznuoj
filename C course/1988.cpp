#include <iostream>
#include <algorithm>
#include <cctype>
int main() {
	std::string str1, str2;
	while (std::cin >> str1 >> str2) {
		int len = std::min(str1.length(), str2.length());
		std::cout << (char)toupper(str1[0]) << (char)tolower(str2[0]);
		for (int i = 1; i < len; i++) {
			std::cout << (char)tolower(str1[i]) << (char)tolower(str2[i]);
		}
		std::cout << std::endl;
	}
}