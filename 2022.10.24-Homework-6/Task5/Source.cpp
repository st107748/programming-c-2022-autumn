#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int min = 100000;
	int k = 0;

	std::cin >> n;

	int a[1000]{ 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}


	for (int i = 0; i < n; ++i)
	{
		if (a[i] < min)
		{
			min = a[i];
			k = i;

		}
	}
	
	for (int i = k; i < n; ++i)
	{
		std::cout << a[i] << " ";
	}

	for (int i = 0; i < k; ++i)
	{
		std::cout << a[i] << " ";
	}

	return EXIT_SUCCESS;
}