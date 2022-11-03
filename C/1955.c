#include <stdio.h>
int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int i = 0;
		while (1) {
			i = 0;
			while (n != 0) {
				i += n % 10;
				n = n / 10;
			}
			if (i < 10)
				break;
			else
				n = i;
		}
		printf("%d\n", i);
	}
}