#include <algorithm>
#include <iostream>
#include <iomanip>
int main() {
	double a[3];
	while (std::cin >> a[0] >> a[1] >> a[2]) {
		std::sort(a, a + 3);
		std::cout << std::fixed << std::setprecision(1) << a[0] << " " << a[1] << " " << a[2] << std::endl;
	}
}