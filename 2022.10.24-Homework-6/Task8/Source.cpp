#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;

	std::cin >> n;

	int a[1000]{ 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}
	
	std::cin >> k;

	if (k > 0)
	{
		for (int i = n - k; i < n; ++i)
		{
			std::cout << a[i] << " ";
		}
		for (int i = 0; i < k - 1; ++i)
		{
			std::cout << a[i] << " ";
		}
	}

	if (k < 0)
	{
		for (int i = -k; i < n; ++i)
		{
			std::cout << a[i] << " ";
		}
		for (int i = 0; i < - k; ++i)
		{
			std::cout << a[i] << " ";
		}
	}
	



	return EXIT_SUCCESS;
}