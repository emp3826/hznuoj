#include <stdio.h>
int main() {
	int i, count;
	count = 0;
	scanf("%d", &i);
	while (i != 1) {
		if (i % 2 == 0) {
			i = i / 2;
			count++;
		}
		else {
			i = 3 * i + 1;
			count++;
		}
	}
	printf("%d\n", count);
}