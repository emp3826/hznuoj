#include <stdio.h>
int main() {
	int t, n, money;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		if (n < 150) {
			money = n;
		}
		if (n <= 200 || n >= 300) {
			money = n % 50;
		}
		else {
			money = n - 200;
		}
		printf("%d\n", money);
	}
}