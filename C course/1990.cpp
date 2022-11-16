#include <algorithm>
#include <iostream>
bool comp(const int a, const int b) {
	return abs(a) < abs(b);
}
int main() {
	int a[10001], n;
	while (std::cin >> n) {
		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
		}
		std::sort(a, a + n, comp);
		for (int i = 0; i < n; i++) {
			std::cout << a[i] << " ";
		}
		std::cout << std::endl;
		std::cout << std::endl;
	}
}