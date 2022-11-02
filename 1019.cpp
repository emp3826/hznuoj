#include<iostream>
long long a[100];
void process()
{
	a[1] = 1;
	a[2] = 2;
	a[3] = 4;
	a[4] = 8;
	for (int i = 5; i <= 66; i++)
		a[i] = a[i - 1] + a[i - 2] + a[i - 3] + a[i - 4];
}
int main()
{
	process();
	int t;
	std::cin >> t;
	while (t--)
	{
		int n;
		std::cin >> n;
		std::cout << a[n] << std::endl;
	}
}
