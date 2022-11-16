#include <stdio.h>
int main() {
	int i, t, n, a[31] = { 1,1,2 };
	scanf("%d", &t);
	for (i = 3; i < 31; i++) {
		a[i] = a[i - 1] + a[i - 2] + a[i - 3];
	}
	for (i = 0; i < t; i++) {
		scanf("%d", &n);
		printf("%d\n", a[n]);
	}
}