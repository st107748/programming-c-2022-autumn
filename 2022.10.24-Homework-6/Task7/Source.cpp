#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int min = 101;
	int max = -101;
	int j = 0;
	int h = 0;
	int p = 1;

	std::cin >> n;

	int a[100]{ 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		if (a[i] > 0)
		{
			k += a[i];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		if (a[i] > max)
		{
			max = a[i];
			j = i;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		if (a[i] < min)
		{
			min = a[i];
			h = i;
		}
	}

	if (h > j)
	{
		for (int i = j + 1; i < h; ++i)
		{
			p *= a[i];
		}
	}
	else
	{
		for (int i = h + 1; i < j; ++i)
		{
			p *= a[i];
		}
	}

	std::cout << k << " " << p;

	return EXIT_SUCCESS;
}