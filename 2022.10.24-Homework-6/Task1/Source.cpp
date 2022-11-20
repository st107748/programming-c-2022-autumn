#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	
	std::cin >> n;

	int a[1000]{ 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	for (int i = 0; i < n / 2; ++i)
	{
		int c = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = c;
	}

	for (int i = 0; i < n; ++i)
	{
		std::cout << a[i] << " ";
	}

	return EXIT_SUCCESS;
}