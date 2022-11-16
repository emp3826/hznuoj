#include <iostream>
int main() {
	std::string str1, str2;
	int n;
	while (std::cin >> str1 >> str2 >> n) {
		std::cout << str2.substr(0, n) << str1 << str2.substr(n) << std::endl;
	}
}