#include <iostream>
#include <algorithm>
int main()
{
	int a[10], sum = 0;
	for (int i = 0; i < 10; i++) {
		std::cin >> a[i];
		sum = sum + a[i];
	}
	std::sort(a, a + 10);
	printf("%d %d %.2f", a[9], a[0], (float)sum / 10);
	return 0;
}