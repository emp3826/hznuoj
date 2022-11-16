#include <stdio.h>
int process(int x) {
	if (x == 0) return 0;
	if (x == 1) return 1;
	if (x == 2) return 2;
	if (x == 3) return 4;
	return process(x - 1) + process(x - 2) + process(x - 3);
}
int main() {
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		printf("%d\n", process(n));
	}
}