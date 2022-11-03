#include <stdio.h>
int main() {
	int t;
	int h = 0;
	int m = 0;
	int s = 0;
	scanf("%d", &t);
	while (t >= 3600) {
		t = t - 3600;
		h++;
	}
	while (t >= 60) {
		t = t - 60;
		m++;
	}
	s = t;
	printf("%d %d %d", h, m, s);
}