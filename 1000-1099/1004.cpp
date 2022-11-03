#include <algorithm>
#include <iostream>
#include <string>
int main() {
	std::string str;
	int n;
	std::cin >> n;
	getchar();
	while (n--) {
		std::getline(std::cin, str);
		std::reverse(str.begin(), str.end());
		std::cout << str << std::endl << std::endl;
	}
}