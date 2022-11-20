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

	if (k < 0)
	{
		for (int i = 0; i < -k; ++i)
		{
			int j = a[0];
			for (int i = 0; i < n; ++i)
			{
				a[i] = a[i + 1];
			}

			a[n - 1] = j;
		}
	}

	if (k > 0)
	{
		for (int i = 0; i < k; ++i)
		{
			int l = a[n - 1];
			for (int i = n - 1; i > 0; --i)
			{
				a[i] = a[i - 1];
			}

			a[0] = l;
		}
	}
	
	for (int i = 0; i < n; ++i)
	{
		std::cout << a[i] << " ";
	}

	return EXIT_SUCCESS;
}