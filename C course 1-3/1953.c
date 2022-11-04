#include <stdio.h>
#include <math.h>
int main() {
	int i;
	int a, b;
	scanf("%d%d", &a, &b);
	for (i = a; i <= b; i++) {
		int j;
		for (j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (j > sqrt(i)) {
			printf("%d\n", i);
		}
	}
}