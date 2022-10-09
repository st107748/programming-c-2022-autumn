#include<iostream>

int main(int argc, char* argv[])
{
	int k = 0;
	int m = 0;
	int n = 0;

	std::cin >> k >> m >>n;

	if (k > n)
	{
		std::cout << 2 * m;
	}
	else
	{
		switch (n % k)
		{
		case 0:
			std::cout << n / k * 2 * m;
			break;
		default:
			std::cout << (n / k + 1) * 2 * m;
			break;
		}
	}

	return EXIT_SUCCESS;
}