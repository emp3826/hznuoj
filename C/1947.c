#include <stdio.h>
int main() {
	int mon, t;
	scanf("%d", &t);
	while (t--) {
		int count = 0;
		scanf("%d", &mon);
		while (mon >= 100) {
			mon = mon - 100;
			count++;
		}
		while (mon >= 50) {
			mon = mon - 50;
			count++;
		}
		while (mon >= 10) {
			mon = mon - 10;
			count++;
		}
		while (mon >= 5) {
			mon = mon - 5;
			count++;
		}
		int temp;
		temp = mon;
		printf("%d\n", count + temp);
	}
}