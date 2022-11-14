#include <stdio.h>
int main() {
	int m, n, t;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &m, &n);
		printf("%.2f\n", (float)m / (float)n);
	}
}