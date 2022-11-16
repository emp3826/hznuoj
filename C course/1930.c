#include <stdio.h>
int score(char c) {
	int sum = 0;
	switch (c) {
	case'A':sum = sum + 1; break;
	case'B':sum = sum + 2; break;
	case'C':sum = sum + 3; break;
	case'D':sum = sum + 4; break;
	}
	return sum;
}
int main() {
	char a, b, c, d, e;
	int total = 0;
	a = getchar();
	getchar();
	b = getchar();
	getchar();
	c = getchar();
	getchar();
	d = getchar();
	getchar();
	e = getchar();
	total = score(a) + score(b) + score(c) + score(d) + score(e);
	printf("%d\n", total);
}