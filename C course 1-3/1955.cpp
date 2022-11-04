#include <iostream>
int main() {
	int n;
	while (std::cin >> n)
		std::cout << (n - 1) % 9 + 1 << std::endl;
}