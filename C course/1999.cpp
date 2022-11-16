#include <algorithm>
#include <iostream>
int main() {
	int a[101], n;
	while (std::cin >> n) {
		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
		}
		std::reverse(a, a + n);
		for (int i = 0; i < n; i++) {
			std::cout << a[i] << " ";
		}
	}
}