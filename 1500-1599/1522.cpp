#include <iostream>
int main() {
	int yy, mm, dd, n;
	int mon[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	while (std::cin >> yy >> mm >> dd) {
		n = 10000;
		if ((yy % 4 == 0 && yy % 100 != 0) || yy % 400 == 0) {
			mon[2] = 29;
		}
		else
			mon[2] = 28;
		for (int i = 1; i <= n; i++) {
			dd += 1;
			if (dd > mon[mm]) {
				dd = dd - mon[mm];
				mm++;
				if (mm > 12) {
					yy++;
					mm = 1;
					if ((yy % 4 == 0 && yy % 100 != 0) || yy % 400 == 0) {
						mon[2] = 29;
					}
					else
						mon[2] = 28;
				}
			}
		}
		printf("%d-%d-%d\n", yy, mm, dd);
	}
}

