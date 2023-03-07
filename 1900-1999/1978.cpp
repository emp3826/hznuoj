#include <algorithm>
#include <iostream>
int main() {
	int t;
	std::string str;
	std::cin >> t;
	while (t--) {
		std::cin >> str;
		std::sort(str.begin(), str.end());
		do {
			std::cout << str << " ";
		} while (std::next_permutation(str.begin(), str.end()));
	}
}