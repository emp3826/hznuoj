#include <algorithm>
#include <iostream>
#include <iomanip>
int main() {
	int a[10], sum = 0;
	for (int i = 0; i < 10; i++) {
		std::cin >> a[i];
		sum = sum + a[i];
	}
	std::cout << *std::max_element(a, a + 10) << " " << *std::min_element(a, a + 10) << " " << std::fixed << std::setprecision(2) << (float)sum / 10;
}