#include <iostream>
int process(int x)
{
	while (x)
	{
		if (x % 10 == 7)
			return 1;
		x = x / 10;
	}
	return 0;
}

int main()
{
	int t;
	long long n;
	std::cin >> t;
	while (t--)
	{
		std::cin >> n;
		if (process(n) || n % 7 == 0)
			std::cout << "pa" << std::endl;
		else
			std::cout << n << std::endl;
	}
	return 0;
}