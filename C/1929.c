#include <stdio.h>
int main() {
	int i, j, m, n;
	scanf("%d%d", &m, &n);
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (i == 0 || j == 0 || i == m - 1 || j == n - 1) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
