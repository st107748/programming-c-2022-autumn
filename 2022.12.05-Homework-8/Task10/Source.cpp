#include<iostream>
#include <cstring>

int KK(int** a, int k, int n)
{
	int c = 1;
	for (int i = 0; i < n; ++i)
	{
		if (a[i][1] == k)
		{
			c += KK(a, a[i][0], n);
		}
	}
	return c;
}
int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	int** a = new int*[n];

	for (int i = 0; i < n; ++i)
	{
		a[i] = new int[2];
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			std::cin >> a[i][j];
		}
	}

	int k = 0;

	std::cin >> k;

	std::cout << KK(a, k, n);

	return EXIT_SUCCESS;
}