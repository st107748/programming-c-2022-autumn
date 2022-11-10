#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int t = 0;
	int j = 0;
	std::cin >> n;

	int a[1000]{ 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	std::cin >> m;

	for (int t = 0, j = 0, k = 0; k < m; ++k)
	{
		std::cin >> t >> j;

		for (int i = t; i <= j; ++i)
		{
			std::cout << a[i - 1];
		}
	}
	return EXIT_SUCCESS;
}