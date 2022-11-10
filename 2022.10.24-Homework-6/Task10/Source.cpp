#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int t = 0;

	std::cin >> n;
	std::cin >> m;

	int a[100000]{ 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> t;
		a[t] = 1;
	}
	for (int i = 0; i < m; ++i)
	{
		std::cin >> t;
		if (a[t] == 1)
		{
			a[t] = 2;
		}
	}

	for (int i = 0; i < 100000; ++i)
	{
		if (a[i] == 2)
		{
			std::cout << i << " ";
		}
	}
	return EXIT_SUCCESS;
}

