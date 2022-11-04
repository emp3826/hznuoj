#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
	{
		if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10)
			(c != 31) ? printf("%d %d %d", a, b, c + 1) : printf("%d %d %d", a, b + 1, 1);
		else if (b == 2)
			(c != 29) ? printf("%d %d %d", a, b, c + 1) : printf("%d %d %d", a, b + 1, 1);
		else if (b == 12)
			(c != 31) ? printf("%d %d %d", a, b, c + 1) : printf("%d %d %d", a + 1, 1, 1);
		else
			(c != 31) ? printf("%d %d %d", a, b, c + 1) : printf("%d %d %d", a, b + 1, 1);
	}
	else
	{
		if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10)
			(c != 31) ? printf("%d %d %d", a, b, c + 1) : printf("%d %d %d", a, b + 1, 1);
		else if (b == 2)
			(c != 28) ? printf("%d %d %d", a, b, c + 1) : printf("%d %d %d", a, b + 1, 1);
		else if (b == 12)
			(c != 31) ? printf("%d %d %d", a, b, c + 1) : printf("%d %d %d", a + 1, 1, 1);
		else
			(c != 30) ? printf("%d %d %d", a, b, c + 1) : printf("%d %d %d", a, b + 1, 1);
	}
}