#include<stdio.h>
int jos(int n);
int main()
{
	int n, s, t;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		s = jos(n);
		printf("%d\n", s);
	}
	return 0;
}

int jos(int n) {
	int i;
	int k = 0;
	for (i = 2; i <= n; ++i) {
		k = (k + 7) % i;
	}
	return k + 1;
}