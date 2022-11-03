#include <stdio.h>
int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int i = 1;
		float sum = 0.0;
		int temp = 1;
		for (i = 1; i <= n; i++) {
			sum = sum + temp * (1.0 / (2 * i - 1));
			temp = -temp;
		}
		printf("%.5f\n", sum);
	}
}