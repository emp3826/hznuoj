#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		if (n == 0) {
			exit(EXIT_SUCCESS);
		}
		float h = 100.00;
		while (n--) {
			h = h * 0.7;
		}
		printf("%.2f\n", h);
	}
}