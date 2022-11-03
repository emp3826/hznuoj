#include <stdio.h>
int main() {
	int n, m;
	while (scanf("%d", &n) != EOF) {
		int x = 0, y = 0;
		double z = 0;
		while (n--) {
			scanf("%d", &m);
			if (m % 2 == 0) {
				x += m;
				y += m * m;
				z += 1.0 / m;
			}
		}
		printf("%d %d %.2f\n", x, y, z);
	}
}