#include <cmath>
#include <iomanip>
#include <iostream>
int main() {
	int n;
	while (std::cin >> n) {
		std::cout << std::fixed << std::setprecision(6) << sqrt(n) << std::endl;
	}
}