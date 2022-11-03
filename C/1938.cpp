#include <algorithm>
#include <iostream>
int main() {
	std::string str;
	int n;
	std::cin >> n;
	while (n--) {
		std::cin >> str;
		std::reverse(str.begin(), str.end());
		std::cout << str << std::endl;
	}
}